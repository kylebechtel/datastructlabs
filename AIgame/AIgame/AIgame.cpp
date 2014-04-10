// AIgame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Board.h"
#include "Player.h"
#include "minmaxtree.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::list<int> l;
	l.push_back(50);
	minmaxtree gamestates;
	gamestates.filltree(l);







	//const int col=6;
	//const int rows=4;
	//Player player;
	//Board board;

	//int table[rows][col];
	//
	////fills the board with 0's 
	//board.initBoard(table);


	//while(true){
	//
	//board.displayBoard(table);

	//player.pOneMove(table);
	//board.displayBoard(table);

	//player.pTwoMove(table);
	//}
	
	
	
	return 0;
}

