#include "StdAfx.h"
#include "MyNum.h"
#include <string>
#include <string.h>
using namespace std;


int* MyNum::ReadIn()
{
	
	string line, path;
	
	path = ("test.txt");
	
	ifstream fin;
	fin.open(path);
	fin >> line;
	int * nums = new int[20001];
	



//fills an array with ints delimited by commas 
	char delim = ','; 
	int prev = 0, curr = 0;
	int idx=0;
	//cout << line.size();
	for(int i = 0; i < line.size(); i++)
	{
		
		if(idx > 20000){ break;}
		//cout << line[i];
		if(line[i] == ',')
		{
			curr = i;
			string token = line.substr(prev, curr-prev);
			nums[idx] = atoi(token.c_str());
			prev = curr+1;
			//cout <<nums[idx]<<endl;
			idx++;

		}
	}

/*secondary method for parsing
	while(!fin.eof())
	{
		fin>>s;
		stringstream ss(s);
		while((ss>>i)&&(j<20000)){
		if (ss.peek() == ',') ss.ignore();
		Array[j++] = i;
	}
		}*/
	
	
	
	//testing
	//It works, trust me.
//	for(unsigned i = 0; i < 20000; i++, nums++)
//		cout << nums[i] << endl;
//		cout << *nums << endl;		
	//cout << line << endl;
	

	return nums;


}