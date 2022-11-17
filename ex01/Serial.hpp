/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:28:48 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/17 19:54:11 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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