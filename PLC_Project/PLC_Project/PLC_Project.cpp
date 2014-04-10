// PLC_Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
	
	std::string container;
	int tmp;
	int var = 0;
	int location;
	std::vector<char> sorted;
	std::vector<char> integers;
	std::vector<char> letters;
	std::vector<char> symbols;
	char a = 'a', z = 'z', A = 'A', Z = 'Z', zero = '0', nine = '9';

int _tmain(int argc, _TCHAR* argv[])
{
	
	std::cin >> container;

	//get ints
		for(int i = 0; i<container.size(); i++)
		{
			tmp = container.at(i);
			if(tmp >= (int)a && tmp <= (int)z || tmp >= (int)A && tmp <= (int)Z)
			{
				letters.push_back(container.at(i));
			}
			else if(tmp >= zero && tmp <= nine){
				integers.push_back(container.at(i));
			}
			else
			{
				symbols.push_back(container.at(i));
			}
		}

		
    //std::sort (integers.begin(), integers.end());
    //std::sort (letters.begin(), letters.end());
	//std::sort (symbols.begin(), symbols.end());
	for(int i = 0; i<integers.size(); i++)
	{
		std::cout << integers.at(i);
	}

	for(int i = 0; i<letters.size(); i++)
	{
		std::cout << letters.at(i);
	}

	for(int i = 0; i<symbols.size(); i++)
	{
		std::cout << symbols.at(i);
	}
	//get letters

	//get everything els

	//sort via asci value


	return 0;
}

