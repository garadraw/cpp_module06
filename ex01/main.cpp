/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:28:50 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/17 19:55:48 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"
/* akes an unsigned integer parameter and converts it to a pointer to Data */
Data* deserialize(uintptr_t raw)
{
	std::cout << "Converting to Data" << std::endl;
	return (reinterpret_cast<Data*>(raw));
}

/* Takes a pointer and converts it to the unsigned integer type uintptr_t */
uintptr_t serialize(Data *ptr)
{
	std::cout << "Converting to uintptr_t" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

int	main()
{
	Data *data = new Data;
	
	data->c = 'z';
	data->i = 15;
	data->f = 0.15;
	data->s = "Hello";

	std::cout << "Data Addres Before: " << data << std::endl;
	std::cout << "Before: c: " << data->c << " i: " << data->i << "f: " << data->f << " s: " + data->s << std::endl;

	std::cout <<std::endl; 
	std::cout <<std::endl; 

	uintptr_t raw = serialize(data);
	Data *nw = deserialize(raw);

	std::cout <<std::endl; 
	std::cout <<std::endl;
	
	std::cout << "Data Address After: " << nw << std::endl;
	std::cout << "After: c: " << nw->c << " i: " << nw->i << " f: " << nw->f << " s: " + nw->s << std::endl;
	
	return (0);

}