// Task3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	enum temporary { hex = 100, h = 1 };
	enum temporary2 { a, b };
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	std::cout << "bool: " << sizeof(bool) << std::endl;
	std::cout << "long: " << sizeof(long int) << std::endl;
	std::cout << "long double: " << sizeof(long double) << std::endl;
	std::cout << "temp: " << sizeof(temporary) << std::endl;
	std::cout << "temp1: " << sizeof(temporary2)<< std::endl;


	return 0;
}

