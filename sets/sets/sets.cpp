// sets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <set>
#include <string>
#include <iostream>
#include <algorithm>
#include "MySet.h"
using namespace std;

	set<string> operator*(set<string> set1, set<string> set2)
{
	MySet joinedset;
	return 	joinedset.join(set1,set2);
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	//declaration 
	string Independence = "Ind", Constitution = "const";
	set<string> Const, Ind, fin;

	//MySet contains methods for filling, joining, and printing sets.
	MySet m;

	//fills the sets with the junk inside the files
	Ind = m.fill(Independence, Ind);
	Const = m.fill(Constitution, Const);

	//Joins the sets
	fin = Ind*Const;
	
	//Prints out all values in sets
	m.printSet(fin);
	

	system("pause");
	return 0;
}

