#pragma once
#include <stack>
using namespace std;
#define POSTONE = 1
typedef Post int;


template <typename T>
class Hanoi: public stack<T>
{
	
typedef discsize T;

public:
	discsize previous;
	void add( Post post, T value)
	{ 
		this->push(value);
		
	}
	
	T whatisit(Post stick)
	{ if(stick == POSTONE) return this->top();}
	
	bool moveit()
	{
		
	}
	
	

	bool freePost()
	{
		if(this->empty()) return true;
		else
			return false;
	}

};

