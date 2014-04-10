// swe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Dependents.h"
#include "Income.h"

int _tmain(int argc, _TCHAR* argv[])
{
		Dependents Dep;
        Income Inc;
        int annualincome = 1, numofdependents = 0;
        double tax = 0.0, Incometax = 0, Dependenttax = 0;

        // Gets user input
		annualincome = Inc.getIncome();
		numofdependents = Dep.getDependents();

        //Calculates tax rates via the user input
		Incometax = Inc.Tax(annualincome);
        Dependenttax = Dep.Tax(numofdependents);

        //Calculates actual tax rate based
        //rounds to the nearest third decimal place
        tax = Incometax * Dependenttax;
        tax = annualincome * tax;

        std::cout << "income = " << annualincome <<  " dependents = " << numofdependents << " tax = " << tax << "\n";
		//for testing purposes
		std::cout << Incometax << " = income tax " << Dependenttax << " = dependent tax ";
		
	return 0;
}

