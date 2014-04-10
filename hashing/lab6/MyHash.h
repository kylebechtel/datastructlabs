#pragma once
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include <fstream>
//remove insert params later
class MyHash
{
public:
	MyHash(void);
	//returns key
	int Hash(std::string value);
	int Hash(char);
	//inserts a file into the hashtable. 
	std::array<std::vector<std::string>, 650> Insert(std::array<std::vector<std::string>, 650>);
	std::array<std::vector<char>, 256> Insertchars(std::array<std::vector<char>, 256>);
	//allows you to search for a string.
	bool Search(std::string search, std::array<std::vector<std::string>, 650>);
	//shows total number of items in the array
	int Howmany(std::array<std::vector<std::string>, 650>);
	int Howmanychar(std::array<std::vector<char>, 256>);
	//finds the mode
	std::string mode(std::array<std::vector<std::string>, 650>);
	char modechar(std::array<std::vector<char>, 256>);

	

	~MyHash(void);
};

