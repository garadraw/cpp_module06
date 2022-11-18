/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:19:44 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/18 14:52:14 by vsimeono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* dynamic casting is, primarily, used to safely downcast; 
i.e., cast a base class pointer (or reference) to a derived 
class pointer (or reference). It can also be used for upcasting; 
i.e., casting a derived class pointer (or reference) to a base 
class pointer (or reference).*/

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif

