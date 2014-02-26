#include "StdAfx.h"
#include "Nodes.h"
#include <string>

Nodes::Nodes(void)
{
	next;
	k;  
}

Nodes* Nodes::fill(void){

	Nodes *curs;
	Nodes *start = new Nodes();
	curs = start;
	std::string str;

	std::ifstream myfile;
	myfile.open("Ann.txt");

	while(!myfile.eof())
	{
	getline(myfile, str, ' ');
	curs->next = new Nodes();
	curs = curs->next;
	curs->k=str;

	//std::cout << curs->k;
	}

	curs->next = new Nodes();
	curs->next = nullptr;
	return start;
}

bool Nodes::scan(std::string str, Nodes * curs)
{
	int i = 0;
	while(true)
	{
		
		if((curs == nullptr)) 
		{
			std::cout << "stop blowing holes in my code!!!" << std::endl;
			return false;
		}
		if(curs->k==str){
			std::cout << str << " is located at point " << i << " in the list" << std::endl;
			
			return true;
			}
		curs = curs->next;
		i++;
	}

}

Nodes::~Nodes(void)
{
}
