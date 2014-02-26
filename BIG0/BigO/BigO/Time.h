#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Time
{

public:
	//Time(void);
	//~Time(void);

	time_t difTime(time_t ptime);

	time_t startTime ();
};
