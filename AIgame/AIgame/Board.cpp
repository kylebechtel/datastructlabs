#include "StdAfx.h"
#include "Board.h"

const int rows = 4, col = 6;
Board::Board(void)
{
}

void Board::displayBoard(int table[rows][col]){
	std::cout << "   ";
	for(int k = 0; k<col; k++)
		std::cout << k+1;
	std::cout << "\n \n";
	for(int i = 0; i<rows; i++){
		std::cout << i << "  ";
		for(int j = 0; j<col; j++){
				if(table[i][j] == 0)
				{
					std::cout << "-";
				}
				else if(table[i][j] == 1)
				{
					std::cout << "1";
				}
				else if(table[i][j] == 2)
				{
					std::cout << "2";
				}
			
			}
		std::cout << "\n";
		}
}

void Board::initBoard(int table[rows][col]){
	for(int i = 0; i<rows; i++){
		for(int j = 0; j<col; j++){
				table[i][j] = 0;
			
		}
	}
}

bool Board::boardwon(int table[rows][col]){
	bool win = false;
	if(Board::fourRow(table))
		win = true;
	return win;
}

bool Board::fourRow(int table[rows][col]){
	bool win = false;
	int counter;

	for(int i = 0; i<rows; i++)
	{
		for(int j = 0; j<col; j++)
		{
			if(table[i][j] == 1)
			{

			}
		}
	}
	if(counter == 4)
		win = true;

	return win;

}

Board::~Board(void)
{
}
