/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:11:33 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/16 16:11:34 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#include <string>

#define MAX_VAL 750

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;

	Array<std::string> strArray(5);
	strArray[0] = "Hello";
	strArray[1] = "Templates";
	strArray[2] = "Are";
	strArray[3] = "Powerful";
	strArray[4] = "!";

	for (size_t i = 0; i < strArray.size(); i++)
	{
		std::cout << strArray[i] << " ";
	}
	std::cout << std::endl;

	Array<double> doubleArray(5);
	for (size_t i = 0; i < doubleArray.size(); i++)
	{
		doubleArray[i] = static_cast<double>(rand()) / RAND_MAX;
	}

	for (size_t i = 0; i < doubleArray.size(); i++)
	{
		std::cout << doubleArray[i] << " ";
	}
	std::cout << std::endl;

	Array<int> emptyArray;
	std::cout << "Empty array size: " << emptyArray.size() << std::endl;

	Array<int> copyArray = numbers;
	copyArray[0] = 999;
	std::cout << "Original array first element: " << numbers[0] << std::endl;
	std::cout << "Copied array first element: " << copyArray[0] << std::endl;

	Array<int> assignedArray;
	assignedArray = numbers;
	assignedArray[1] = 888;
	std::cout << "Original array second element: " << numbers[1] << std::endl;
	std::cout << "Assigned array second element: " << assignedArray[1] << std::endl;

	return 0;
}
