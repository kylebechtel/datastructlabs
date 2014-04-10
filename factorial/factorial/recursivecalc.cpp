#include "StdAfx.h"
#include "recursivecalc.h"


recursivecalc::recursivecalc(void)
{
}


int recursivecalc::factorial(int num, int val){
	if(num==0){
		int j = val;
		val = 0;
		return j;
	}
	else{
		val = num * val;
		num = num - 1;
		factorial(num, val);
	}
}


recursivecalc::~recursivecalc(void)
{
}
