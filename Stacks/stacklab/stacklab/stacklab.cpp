// stacklab.cpp : Defines the entry point for the console application.
// May utilize discs and a test class later

#include "stdafx.h"
#include <iostream>
#include <stack>
#include "tower.h"
#include <time.h>
#include <cstdlib>

int _tmain(int argc, _TCHAR* argv[])
{
	
	int numofdiscs = 4;
	std::stack<int> first;
	std::stack<int> second;
	std::stack<int> third;
	std::stack<int> recordmove;
	tower game;

	srand(time(NULL));

	//fills stack with ints upto the size of the tower in reverse order.
	//aka, if size = 10,  stack={10,9,8,7....}
	game.fill(first, numofdiscs);

	time_t t;
	t= time(0);
	//gameloop
	while(!game.win(third, numofdiscs))
	{
		//for(int i = 1; i<=6; i++)
		//{
		int i = rand()%6+1;
		recordmove.push(game.move(first, second, third, i));
		/*int j = recordmove.top();
		if(j!=0) {
			switch(j) {
			case 1:
				std::cout << "2 -> 1" << std::endl;
				break;
			case 2:
				std::cout << "3 -> 1" << std::endl;
				break;
			case 3:
				std::cout << "1 -> 2" << std::endl;
				break;
			case 4:
				std::cout << "3 -> 2" << std::endl;
				break;
			case 5:
				std::cout << "2 -> 3" << std::endl;
				break;
			case 6:
				std::cout << "1 -> 3" << std::endl;
				break;
			}
		}*/
	}

	t=time(0)-t;
	std::cout << "congrats on winning the game in " << t << " clicks! and this many moves: " << recordmove.size() << std::endl; 
	
	//test
	

	system("pause");
	return 0;
}

