#pragma once
#include <iostream>
class Player
{
public:
	static const int col = 6;
	static const int rows = 4;
	Player(void);
	void pOneMove(int [rows][col]);
	void pTwoMove(int [rows][col]);
	~Player(void);
};

