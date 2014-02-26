
#include "StdAfx.h"
#include "Time.h"

time_t Time::difTime(time_t ptime){
	time_t t = time(0);
	t = t-ptime;
	return t;
}

time_t Time::startTime(void){
	time_t t = time(0);
	return t;
}

