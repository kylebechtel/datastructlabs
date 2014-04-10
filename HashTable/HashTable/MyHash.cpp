#include "StdAfx.h"
#include "MyHash.h"

 int tablesize = 10; 
MyHash::MyHash(void)
{

	for(int i = 1; i < tablesize; i++)
	{
		
	}
} 

int MyHash::Hash(std::string value)
{
	int i = 0;
	int key = 0;
	while(i <= value.length())
	{
		key = key + (int)value[i];
		i++;
	}
	key = key % tablesize;
	return key;
}

void MyHash::Insert(int key, std::string value)
{
	
}

bool MyHash::Search(std::string search)
{
	bool isitthere = false;
	//int location = MyHash::Hash(value);
	//while(hashtable[location]->next != NULL)
	//{
	//	if(hashtable[location]->value == search)
	//	{
	//		isitthere = true;
	//		return isitthere;
	//	}
	//	//else
	//}
	return isitthere;
}

MyHash::~MyHash(void)
{
}
