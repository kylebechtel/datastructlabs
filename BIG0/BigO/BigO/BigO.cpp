// BigO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Time.h"
#include "MyNum.h"
#include "Storage.h"
#include "Node.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	//declaration
	time_t t;

	//classes
	Time time;
	MyNum read;
	Storage sort;

	t = time.startTime();
	sort.Sort(read.ReadIn());
	//read.ReadIn();
	return 0;
}

