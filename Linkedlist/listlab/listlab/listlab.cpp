// listlab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <time.h>
#include "Nodes.h"

	Nodes* operator++(Nodes n)
{
  return n.fill();
}

int _tmain(int argc, _TCHAR* argv[])
{
	Nodes n;
	Nodes * start, * curs;
	std::string str;
	clock_t time;
	start = ++(n);

	for(int j = 0; j<10; j++){
		curs = start;
		std::cout << "Enter a piece of text youd like to find or q to quit: ";
		std::cin >> str;
		
		if(str == "q"){break;}
		
		time = clock();
		
		if(n.scan(str, curs))
			{
				time = clock() - time;
				std::cout << "it took me " << time << " clock cycles to do this" << std::endl;
			}
	}
	system("pause");
	return 0;
	
}