#include "StdAfx.h"
#include "Player.h"


static const int col = 6;
static const int rows = 4;
Player::Player(void)
{
}

void Player::pOneMove(int table[rows][col]){
	int playeronecol;
	std::cout << "Player 1, what is your move? \n";
	std::cin >> playeronecol;
	playeronecol = playeronecol - 1;
	for(int i = rows; i>=0; i--)
	{
		if(0 == table[i][playeronecol]){
			table[i][playeronecol] = 1;
			break;
		}
	}
}

void Player::pTwoMove(int table[rows][col]){
	int playeronecol;
	std::cout << "Player 2, what is your move? \n";
	std::cin >> playeronecol;
	playeronecol = playeronecol - 1;
	for(int i = rows; i>=0; i--)
	{
		if(0 == table[i][playeronecol]){
			table[i][playeronecol] = 2;
			break;
		}
	}
}

Player::~Player(void)
{
}
