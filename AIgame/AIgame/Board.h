#pragma once
#include <iostream>
class Board
{
public:
	static const int col = 6;
	static const int rows = 4;
	Board(void);
	void initBoard(int [rows][col]);
	void displayBoard(int [rows][col]);
	bool boardwon(int [rows][col]);
	bool Board::fourRow(int [rows][col]);
	~Board(void);
};

