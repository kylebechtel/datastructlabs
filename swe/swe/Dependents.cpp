#include "StdAfx.h"
#include "Dependents.h"


Dependents::Dependents(void)
{
}

  double Dependents::Tax(int numofdeps){
        double taxrate = 1;
        if(numofdeps == 1) taxrate = .10;
        else if(numofdeps == 2 || numofdeps == 3) taxrate = .25;
        else if (numofdeps > 3) taxrate = .40;
        else if (numofdeps < 0) std::cout <<"Umm, im not sure what you're doing with your kids, but you're doing it wrong.";

        return taxrate;
    }

  int Dependents::getDependents(){
    		 int num; 
			 int counter = 0;
		
		std::cout << "Enter an the number of dependents you have: ";
		std::cin >> num;

		//While the input entered is not an integer, prompt the user to enter an integer.
		while(!std::cin && num > -1)
		{
			if(num<0) counter++;
			else if(counter>5)
			std::cout << "No, that is not possible. Please enter a number that is greater than -1: ";
			
			std::cout << "Please enter a number that is greater than 0";
			std::cin.clear();
			std::cin.ignore();
			std::cin >> num;
		}
		std::cin.clear();
		std::cin.ignore();
		return num;
    }

Dependents::~Dependents(void)
{
}
