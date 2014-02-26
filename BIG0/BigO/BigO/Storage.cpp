#include "StdAfx.h"
#include "Storage.h"


Storage::Storage(void)
{
}

void Storage::Sort(int* p)
{
	Node n[20000];
	//cout << p[20000] << " & " << &p << endl;
		for(int i = 0; i<20000; i++, p++)
		{
			n[i].setNum(*p);
			n[i].setTime(time(0));
		}
	int j=0, key=0, tok = 0, position = 0; 
	time_t ktime;		
       for(int i=1; i<20000; i++)
	   {
		   key = n[i].getNum();
		   ktime = n[i].getTime();
		   position = i;
		   while((position>0) && (n[position-1].getNum() > key))
		   {
			   n[position].setNum(n[position-1].getNum());
			   n[position].setTime(n[position-1].getTime());
			   position--;
		   }
		   n[position].setNum(key);
		   n[position].setTime(ktime);
		 //  cout << i << endl;
	   }

	   
	   
	   //testing
		for(int i = 1; i<20000; i++, p++)
		{
////			cout << *p;
//			//n[i].setNum(*p);
			cout << n[i].getNum() << endl;
//
		}
}
	


Storage::~Storage(void)
{
}
