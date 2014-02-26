// Bubble_Sort.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "bs.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>

using namespace std;

//bubblesort algorithm
//vectors lab
//operator overloading lab

//overloading the "<<" operator to print out the contents of a vector
	ostream& operator<<(std::ostream& os, const vector<int> vect)
{
	for(int i = 0; i<(int)vect.size(); i++)
	{
		cout << vect[i] << endl;
	}
  return os;
}

int main(int argc, char* argv[])
{
	//seeding the random number generator
	//srand(time(0));

	//declartion
	int r, ri;
	int* random = new int[50];
	vector<int> v;
	bs sorter;
	
	
	//fills the random array with numbers for sorting later
		r = rand() % 25+50;
		sorter.fill(v, r);

	//Sorts the Array
		sorter.max(v);

	//Showing off the single print method. you should go look at it.
		sorter.peek(v, 12);

	//A pause to show off its awesomeness
		sorter.dumb();

	//Prints sorted array
		cout << v;
		sorter.dumb();

	//Ill let you figure this bit out without my chatter :)
		sorter.min(v);
		cout << v;
		sorter.dumb();

	return 0;
}

