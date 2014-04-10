#pragma once
#include <string>

class MyHash
{
private:
	
public:
	
	class item{
	std::string value;
	item* next;
	void setNext(item* p){ next = p;}
	void setValue(std::string s){ value = s;}
	};

	item* hashtable[10];

	MyHash(void);
	void Insert(int, std::string);
	int Hash(std::string);
	bool Search(std::string);
	~MyHash(void);
};

