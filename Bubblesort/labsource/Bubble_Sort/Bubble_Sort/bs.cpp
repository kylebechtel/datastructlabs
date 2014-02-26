#include "bs.h"
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>
using namespace std;

bs::bs(void)
{
}

void bs::max(vector<int>& unknown)
{
	int tracker=0;
	int temp1, temp2;
	bool skip=true;
	while(skip){
		skip = false;
		tracker = tracker++;
		for(int i=1; i<(int)unknown.size(); i++)
		{
		temp1 = unknown[i-1];
		temp2 = unknown[i];
		if(temp2>temp1)
		{
			unknown[i-1] = temp2;
			unknown[i] = temp1;
			skip = true;
		}
		}
	}
//	cout<<"iteration number" << tracker << "\n";
}

void bs::min(vector<int>& unknown)
{
	int tracker=0;
	int temp1, temp2;
	bool skip=true;
	while(skip){
		skip = false;
		tracker = tracker++;
		for(int i=1; i<(int)unknown.size(); i++)
		{
		temp1 = unknown[i-1];
		temp2 = unknown[i];
		if(temp2<temp1)
		{
			unknown[i-1] = temp2;
			unknown[i] = temp1;
			skip = true;
		}
		}
	}
//	cout<<"iteration number" << tracker << "\n";
}

void bs::fill(vector<int>& v, int it){
	//srand(time(0));	
	int r;
	for(int i =0; i<=it; i++)
	{
		r = rand() % 100;
		v.push_back(r);
	}
}

void bs::peek(vector<int> v, int location)
{
	
	if(location > v.size())
	{
		fu++;
		switch(fu){
			case 1:
		cout << "what were you trying to do exactly?" << endl;
		break;
			case 2:
		cout << "why you do this to me?" << endl;
		break;
			case 3:
		cout << "the computer will explode in ten... nine... eight..." << endl;
		break;
			case 4:
		cout << "if you read these and they made you smile, plus five to the lab grade :)" << endl;
		break;
		}
	}
	else
	cout << v[location] << endl;
}

bs::~bs(void)
{
}
