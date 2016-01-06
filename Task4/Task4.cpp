// Task4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	for (char ch = 'a'; ch < 'z'; ch++)
	{
		std::cout<<std::hex << int(ch)<< std::endl;
	}
	std::cout <<std::hex<< int('z') << std::endl;
	for (char i = '0'; i < '9';i++)
	{
		std::cout<<std::hex << int(i) << std::endl;
	}
	std::cout <<std::hex<< int('9') << std::endl;
    return 0;
}

