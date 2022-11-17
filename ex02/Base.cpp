/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:23:21 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/17 20:35:24 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	srand(time(0));
	int numb = rand() % 10 + 1;
	if (numb <= 3)
		return (new A);
	else if (numb <= 6)
		return (new B);
	return (new C);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Class type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class type C" << std::endl;
	else
		std::cout << "Class type Unknown" << std::endl;
}

void identify(Base &p)
{
	Base temp;

	try
	{
		temp = dynamic_cast<A&>(p);
		std::cout << "Class type A" << std::endl;
	}
	catch(std::exception &e)
	{
		
	}

	try
	{
		temp = dynamic_cast<B&>(p);
		std::cout << "Class type B" << std::endl;
	}
	catch (std::exception &e)
	{
		
	}

	try
	{
		temp = dynamic_cast<C&>(p);
		std::cout << "Class type C" << std::endl;
	}
	catch (std::exception)
	{
		
	}
	
}
