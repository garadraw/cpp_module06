/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:28:48 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/18 14:53:48 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* reinterpret_cas is used to convert a pointer of some data type into a pointer
of another data type, even if the data types before and after conversion are different.
It does not check if the pointer type and data pointed by the pointer is same or not.*/

#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <iostream>
#include <string>

typedef struct Data
{
	std::string s;
	int			i;
	float		f;
	char		c;
} Data;

#endif