// Task5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <limits>
#include <ostream>
#include <iostream>

int main()
{

	std::cout << "char: " << std::numeric_limits<char>::max << std::endl;
	std::cout << "int: " << std::numeric_limits<int>::max << std::endl;
	std::cout << "float: " << std::numeric_limits<float>::max << std::endl;
	std::cout << "double: " << std::numeric_limits<double>::max << std::endl;
	std::cout << "bool: " << std::numeric_limits<bool>::max << std::endl;
	std::cout << "long: " << std::numeric_limits<long>::max << std::endl;
	std::cout << "long double: " << std::numeric_limits<long double>::max << std::endl;
	std::cout << "unsigned: " << std::numeric_limits<unsigned>::max << std::endl;
    return 0;
}

