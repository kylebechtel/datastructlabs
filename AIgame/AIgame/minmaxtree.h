#pragma once
#include <list>
class minmaxtree
{
public:
	int gamestate;

	struct Node{
		int gamestate;
		Node* less;
		Node* more;
	};

	minmaxtree(void);
	void filltree(std::list<int>);
	~minmaxtree(void);
};

