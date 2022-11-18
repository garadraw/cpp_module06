/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsimeono <vsimeono@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:19:47 by vsimeono          #+#    #+#             */
/*   Updated: 2022/11/18 14:48:44 by vsimeono         ###   ########.fr       */
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
	A* a;
	B* b;
	C* c;
	
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
	catch(std::bad_cast &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		temp = dynamic_cast<B&>(p);
		std::cout << "Class type B" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		temp = dynamic_cast<C&>(p);
		std::cout << "Class type C" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}


int main()
{
	Base *base = generate();

	identify(base);
	identify(*base);

	delete base;

	return (0);
}