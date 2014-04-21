// AVLtree.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <boost/algorithm/string/erase.hpp>
#include <cctype>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <string>
#include "Tree.h"
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Fills avl tree with the declaration of independence
	Tree AVL;
	ifstream myfile;
	myfile.open("Dec.txt");
	string str;
	while (!myfile.eof())
	{
		getline(myfile, str, ' ');
	//go back and do this with pystring
		boost::algorithm::erase_all(str, " ");
		boost::algorithm::erase_all(str, "\n");
		boost::algorithm::erase_all(str, ".");
		boost::algorithm::erase_all(str, "-");
		boost::algorithm::erase_all(str, ":");
		boost::algorithm::erase_all(str, ";");
		boost::algorithm::erase_all(str, ",");
		AVL.Insert(&AVL.root, AVL.hash(str), str);
	}


	//shows max depth
	cout << endl << "The Depth of the Tree is " << AVL.Findmaxheight(AVL.root);


	//shows the size of the tree
	cout << endl << "Number of words in the tree " << AVL.size(AVL.root);


	//searches for a word and gets the time it take to search back.
	string search;
	cout << endl << "Please enter a word you would like to find: ";
	cin >> search;
	time_t curtime = time(0);
	bool ISITTHERE = AVL.Search(search, AVL.root);
	curtime = curtime - time(0);
	if (ISITTHERE){
		cout <<  endl << "That words in there. it took " << curtime << " to find";
	}
	else{ cout << endl << "Im sorry, your word does not appear to be here today. Come back tomorrow"; }



	//Debug code:: 
	//Setup Tmp tree
	/*AVL.Insert(&AVL.root, AVL.hash("2"), "2");
	AVL.Insert(&AVL.root, AVL.hash("1"), "1");
	AVL.Insert(&AVL.root, AVL.hash("3"), "3");
	AVL.Insert(&AVL.root, AVL.hash("4"), "4");
	AVL.Insert(&AVL.root, AVL.hash("5"), "5");
	AVL.Insert(&AVL.root, AVL.hash("6"), "6");*/
	

	//Print Tree
	int printer = 5;
	while (printer != 0){
		cout << endl << endl << "if you would like to see the printed tree enter 1 " << endl << " for pre, 2 for inorder, and 3 for post, to exit:0" << endl;
		cin.clear();
		cin >> printer;

		switch (printer){
		case 1:
			AVL.Preorder(&AVL.root); cout << endl;
			break;
		case 2:
			AVL.Inorder(&AVL.root); cout << endl;
			break;
		case 3:
			AVL.Postorder(&AVL.root); cout << endl;
			break;
		}
	}

	//Checking rotations// check successful.
	/*AVL.LL(&AVL.root);
	AVL.Preorder(&AVL.root); cout << endl;
	AVL.RR(&AVL.root);
	AVL.Preorder(&AVL.root); cout << endl;
	AVL.RL(&AVL.root);
	AVL.Preorder(&AVL.root); cout << endl;
	AVL.LR(&AVL.root);
	AVL.Preorder(&AVL.root); cout << endl;*/

	//destructs tree
	AVL.clear(AVL.root);

	//system("pause");
	return 0;
}

