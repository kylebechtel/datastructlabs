#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Nodes
{
	
	
public:
	std::string k;
	Nodes *next;
	Nodes* fill(void);
	bool scan(std::string, Nodes*curs);
	Nodes(void);
	~Nodes(void);
};

