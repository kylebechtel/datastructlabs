// stl_heap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>     
#include <algorithm>    
#include <vector>
#include <random>

int _tmain(int argc, _TCHAR* argv[])
{
	int v1 = rand();
	int v2 = rand();
  	  int myints[] = {v1,v2,88,55,81,31,26,77,17,20,29,22,14,48};
	  std::vector<int> v(myints,myints+14);

	  std::make_heap (v.begin(),v.end());
	  std::cout << "initial max heap   : " << v.front() << '\n';

	  std::cout << "final sorted range :";
	  for (unsigned i=0; i<v.size(); i++)
		std::cout << ' ' << v[i];

	  std::pop_heap (v.begin(),v.end()); v.pop_back(); 
	  std::pop_heap (v.begin(),v.end()); v.pop_back(); 
	  std::cout << "\n max heap after double pop : " << v.front() << '\n';

	  
	  //sorts it to a min heap
	  std::sort_heap (v.begin(),v.end());

	  //reverses min heap to make max heap
	  std::reverse(v.begin(),v.end());
	  
	  //prints heap values
	  std::cout << "\n final sorted range :";
      for (unsigned i=0; i<v.size(); i++)
		std::cout << ' ' << v[i];


	  std::cout << '\n';
	  std::system("Pause");
	return 0;
}

