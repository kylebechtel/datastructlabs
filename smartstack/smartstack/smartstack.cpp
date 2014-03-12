// smartstack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stack>
#include <iostream>
#include "Hanoi.h"




int _tmain(int argc, _TCHAR* argv[])
{
	Hanoi<int> towerone;
	Hanoi<int> towertwo;
	Hanoi<int> towerthree;

	towerone.push(2);
	towerone.freePost();
	towerone.whatisit(1);
	towertwo.freePost();
	towertwo.add(2, 3);
		
	return 0;
}

