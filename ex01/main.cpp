/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:51:17 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 15:53:09 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.h"

template <typename T>
void printElement(const T &elem)
{
	std::cout << elem << " ";
}

template <typename T>
void increment(T &elem)
{
	++elem;
}

int main()
{
	int intArray[] = {1, 2, 3, 4, 5};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string strArray[] = {"Hola", "Templates", "en", "C++"};

	std::cout << "Array de enteros antes del incremento: ";
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	iter(intArray, 5, increment<int>);

	std::cout << "Array de enteros después del incremento: ";
	iter(intArray, 5, printElement<int>);
	std::cout << std::endl;

	std::cout << "Array de doubles: ";
	iter(doubleArray, 5, printElement<double>);
	std::cout << std::endl;

	std::cout << "Array de strings: ";
	iter(strArray, 4, printElement<std::string>);
	std::cout << std::endl;

	return 0;
}
