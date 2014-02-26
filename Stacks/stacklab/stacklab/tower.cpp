#include "StdAfx.h"
#include "tower.h"


tower::tower(void)
{
}

void tower::fill(std::stack<int> &fill, int i)
{
	for(i; i>0; i--)
	{
		fill.push(i);
	}
}

bool tower::win(std::stack<int> winner, int size)
{
	bool check = false;
	
	if(winner.empty()) return check;
	if(winner.size() != size) return check;
	
	for(int i = 1; i<=winner.size(); i++)
	{
		if(i == winner.top())
		{
			check = true;
			winner.pop();
		}
		else
		{
			check = false;
			break;
		}
	}
	return check;
}


int tower::move(std::stack<int> &first,std::stack<int> &second,std::stack<int> &third, int num)
{
	//srand(time(NULL));
	//int stack2 = rand();
	//stack2=stack2%7;
	if(num != 0)
	{
	switch(num)
	{
		case 1:
			if(!second.empty()) {
				if(first.empty()) {
					first.push(second.top());
					second.pop();
					return 1;
				} else if(first.top() > second.top()){ 
					first.push(second.top());
					second.pop();
					return 1;
				}
			}
			break;

		case 2: 
			if(!third.empty()){
				if(first.empty()){
				first.push(third.top());
				third.pop();
				return 2;}

				if(first.top() > third.top()){ 
				first.push(third.top());
				third.pop();
				return 2;}
				}
					break;
		case 3: 
			if(!first.empty()){
				if(second.empty()){
				second.push(first.top());
				first.pop();
				return 3;
				}
				
				else if(second.top() > first.top()){ 
				second.push(first.top());
				first.pop();
				return 3;}
			}
				break;
			
		case 4:
			if( !third.empty()){
				if(second.empty()){
				second.push(third.top());
				third.pop();
				return 4;
				}

				else if(second.top() > third.top()){ 
				second.push(third.top());
				third.pop();
				return 4;}
			}
				break;
			
		case 5:
			if(!second.empty())
			{
				if(third.empty()){
					third.push(second.top());
					second.pop();
					return 5;}
				else if(third.top() > second.top()){ 
					third.push(second.top());
					second.pop();
					return 5;}
			}
				break;
			
			
		case 6: 
			if(!first.empty()){
				if(third.empty())
				{
					third.push(first.top());
					first.pop();
					return 6;
				}
				else if(third.top() > first.top()){ 
				third.push(first.top());
				first.pop();
				return 6;}
			}
				break;
		}
	}

		return 0;
}
tower::~tower(void)
{
}
