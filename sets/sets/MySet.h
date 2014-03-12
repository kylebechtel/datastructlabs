#pragma once
#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
using namespace std;

class MySet
{
	
public:
	MySet(void);

	//fills a set. First param is the name of the file 
	//the data is coming from.
	set<string> fill(string str, set<string>);

	//Prints all the values of a set
	void printSet(set<string> s);

	//finds the union of two sets and returns it.
	set<string> join(set<string>, set<string>); 

	~MySet(void);
};

