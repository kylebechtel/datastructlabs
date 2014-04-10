// hashing.cpp : Defines the entry point for the console application.
//
//sorry for the mess, didnt have time to make it pretty
// Kyle Bechtel
#include "stdafx.h"
#include <vector>
#include <array>
#include <iostream>
#include <string>
#include "MyHash.h"

int _tmain(int argc, _TCHAR* argv[])
{
	//sizes arbitraraly chosen
	std::array<std::vector<std::string>, 650> table;
	std::array<std::vector<char>, 256> chartable;
	MyHash hash;

	//fills the table with the declaration of independance
	table = hash.Insert(table);
	//searches for a word in the table
	if(hash.Search("the", table))
		std::cout << "successfull at searching for a word" << "\n";

	//shows how many things are in the table
	std::cout << "how many words are in the declaration of independence? " << hash.Howmany(table);
	//shows the thing that shows up most often in the table.
	std::cout << "\n" << "what word shows up most often? " << hash.mode(table) << "\n";

	chartable = hash.Insertchars(chartable);
	std::cout << "how many characters are in the declaration of independence? " << hash.Howmanychar(chartable);
	std::cout << "\n" << "what was the most use key on the typewriter? spaces! " << hash.modechar(chartable) << "\n";
	
	return 0;
}