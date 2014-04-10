#include "StdAfx.h"
#include "Income.h"


Income::Income(void)
{
}

double Income::Tax(int income){
        double taxrate = 0;
        if(income > 0 && income <= 20000) taxrate = .04;
        else if(income > 20000 && income <= 30000) taxrate = .05;
        else if(income > 30000 && income <= 40000) taxrate = .06;
        else if(income > 40000 && income <= 50000) taxrate = .07;
        else if(income > 50000 && income <= 90000) taxrate = .10;
        else if(income > 90000) taxrate = .13;
        else if(income <= 0) {
			std::cout << "Error Code: You appear to be homeless, no taxes for you";
        }
        return taxrate;
    }

 int Income::getIncome(){

	 int num;
	 int counter = 0;
		

		std::cout << "Enter your annual income: ";
		std::cin >> num;

		//While the input entered is not an integer, prompt the user to enter an integer.
		while(!std::cin && num > 0)
		{
			if(num>0) counter++;
			else if(counter>5) std::cout << "You appear to be homeless. No taxes for you";
			std::cout << "Please enter an income higher than zero, no punctuation or letters necessary: ";
			std::cin.clear();
			std::cin.ignore();
			std::cin >> num;
		}
		//clearing the stream for the next call of cin
		std::cin.clear();
		std::cin.ignore();
		return num;
}

Income::~Income(void)
{
}
