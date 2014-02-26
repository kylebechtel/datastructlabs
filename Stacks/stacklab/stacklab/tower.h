#pragma once
#include <stack>
#include <random>
#include <time.h>
//remove later
#include <iostream>

class tower
{
public:
	tower(void);
	void fill(std::stack<int>&, int);
	bool win(std::stack<int>, int);
	int move(std::stack<int>&, std::stack<int>&,std::stack<int>&, int);
	
	~tower(void);
};

