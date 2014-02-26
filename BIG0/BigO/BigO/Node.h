#pragma once
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Node
{
	time_t tcreated;
	int j;
public: 

	Node();
	int getNum(void);
	void setNum(int);
	time_t getTime();
	void setTime(time_t);
	~Node(void);
};

