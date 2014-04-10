// factorial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "recursivecalc.h"
#include <iostream>
#include <exception>

int _tmain(int argc, _TCHAR* argv[])
{

	recursivecalc calc;
	std::exception e;
	int val = 1, num = 0;
	
		try{

			std::cout << "what factorial would you like me to calculate? \n";
			std::cin >> num;
	
			//throws exception for nums less than 1 or greater than twelve
			if(num <= 0 || num > 12)
				throw e;

			//calculates the factorial
			val = calc.factorial(num, val);
			std::cout << val << "\n";
		}



		catch(std::exception e){
			std::cout << "oops, couldnt process \n";
		}
	
	return 0;
}

