/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:09:43 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/17 19:23:42 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please provide 1 Argument" << std::endl;
		return (0);
	}
	
	std::string str = argv[1];
	double num = strtod(str.c_str(), NULL);

	if (!num && str[0] != '0' && str.length() != 1)
	{
		std::cout << "Not Literal" << std::endl;
		return (0);
	}

	/* Char */
	if ((str.find_first_of("0123456789") == std::string::npos) && str.length() == 1)
		std::cout << "Char: '" << str[0] << "'" << std::endl;
	else if (isprint(num))
		std::cout << "Char: '" << static_cast<char>(num) << "'" << std::endl;
	else if (num == 127 || (num < 32 && num > 0))
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: Impossible" << std::endl;
	
	/* Int */
	if (!num && str[0] != '0')
		std::cout << "Int: " << static_cast<int>(str[0]) << std::endl;
	else if (num > INT_MAX || num < INT_MIN || isnan(num))
		std::cout << "Int: Impossible" << std::endl;
	else
		std::cout << "Int: " << atoi(str.c_str()) << std::endl;

	/* Float */
	std::cout.precision(1);
	float fnum = strtof(str.c_str(), NULL);

	if (!fnum && errno == ERANGE)
	{
		std::cout << "Number out of Range" << std::endl;
		return (0);
	}

	if (!fnum && str[0] != '0')
		std::cout << std::fixed << "Float: " << static_cast<float>(str[0]) << "f" << std::endl;
	else
		std::cout << std::fixed << "Float: " << fnum << "f" << std::endl;
	
	/* Double */
	if (!num && str[0] != '0')
		std::cout << std::fixed << "Double: " << static_cast<double>(str[0]) << std::endl;
	else
	std::cout <<std::fixed << "Double: " << num << std::endl;

	return (0);
}