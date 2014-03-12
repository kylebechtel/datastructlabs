#include "MySet.h"


MySet::MySet(void)
{
}

void MySet::printSet(set<string> s)
{
	set<string>::iterator it=s.begin();
		for(it; it!=s.end(); it++)
	{
		cout << *it << endl;
	}
}

set<string> MySet::fill(string str, set<string> s)
{
	str = str + ".txt";
	std::ifstream myfile;

	myfile.open(str);

	//this loop keeps reading til eof
	while(!myfile.eof())
	{
		getline(myfile, str, ' ');
		s.insert(str);
	}
	return s;
}

set<string> MySet::join(set<string> set1, set<string> set2)
{
	set<string> set_i;
	set_intersection(set1.begin(), set1.end(),
                   set2.begin(), set2.end(),
                   inserter(set_i, set_i. begin()));

	return set_i;
}

MySet::~MySet(void)
{
}
