#include "StdAfx.h"
#include "MyHash.h"


int tablesize = 650; 
MyHash::MyHash(void)
{
} 

int MyHash::Hash(std::string value)
{
	int i = 0;
	int key = 0;
	int l = value.length();
	while(i < value.length())
	{
		key = key + (int)value[i];
		i++;
	}
	key = key % tablesize;
	return key;
}
int MyHash::Hash(char value)
{
	int key = 0;
	key = key + (int)value;
	key = key % 256;
	return key;
}

std::array<std::vector<std::string>, 650> MyHash::Insert(std::array<std::vector<std::string>, 650> table)
{
	std::ifstream myfile;
	myfile.open("Ind.txt");
	std::string str;
	while(!myfile.eof())
	{
	getline(myfile, str, ' ');
	int key = MyHash::Hash(str);
	table[key].push_back(str);
	}
	return table;

}

std::array<std::vector<char>, 256> MyHash::Insertchars(std::array<std::vector<char>, 256> table)
{
	std::ifstream myfile;
	myfile.open("Ind.txt");
	char str;
	while(!myfile.eof())
	{
	myfile.get(str);
	int key = MyHash::Hash(str);
	table[key].push_back(str);
	}
	
	return table;

}

bool MyHash::Search(std::string search, std::array<std::vector<std::string>, 650> table)
{
	bool isitthere = false;
	int key = MyHash::Hash(search);
	for(int i = 0; i < table[key].size() && !table[key].empty();)
		{
			
			if(table[key].at(i) == search){
				isitthere = true; 
				return isitthere;
			}
			i++;
			
		}
	return isitthere;
}

int MyHash::Howmany(std::array<std::vector<std::string>, 650> table)
{
	int counter = 0;
		for(int j = 0; j<table.size() && !table.empty();)
	{
		for(int i = 0; i < table[j].size() && !table[j].empty();)
		{
			
			counter++;
			i++;
			
		}

		j++;
	
	}
		return counter;
}

int MyHash::Howmanychar(std::array<std::vector<char>, 256> table)
{
	int counter = 0;
		for(int j = 0; j<table.size() && !table.empty();)
	{
		for(int i = 0; i < table[j].size() && !table[j].empty();)
		{
			
			counter++;
			i++;
			
		}

		j++;
	
	}
		return counter;
}


std::string MyHash::mode(std::array<std::vector<std::string>, 650> table)
{
	std::string mode = "hi";
	int countcomp = 0;
	std::ifstream myfile;
	myfile.open("Ind.txt");
	std::string str;
	while(!myfile.eof())
	{
	getline(myfile, str, ' ');
	int key = MyHash::Hash(str);

	int counter = 0;
	
		for(int i = 0; i < table[key].size() && !table[key].empty();)
		{
			if(table[key].at(i) == str)
			{
				counter++;
			}
			i++;
			
		}
		if(counter> countcomp)
		{
			countcomp = counter;
			mode = str;
		}
	}
	return mode;
}

char MyHash::modechar(std::array<std::vector<char>, 256> table)
{
	char mode = 'h';
	int countcomp = 0;
	std::ifstream myfile;
	myfile.open("Ind.txt");
	char str;
	while(!myfile.eof())
	{
	myfile.get(str);
	int key = MyHash::Hash(str);

	int counter = 0;
	
		for(int i = 0; i < table[key].size() && !table[key].empty();)
		{
			if(table[key].at(i) == str)
			{
				counter++;
			}
			i++;
			
		}
		if(counter> countcomp)
		{
			countcomp = counter;
			mode = str;
		}
	}
	return mode;
}

MyHash::~MyHash(void)
{
}
