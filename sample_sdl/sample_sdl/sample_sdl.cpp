// sample_sdl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SDL.h"
#include <iostream>
#include "App.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	CApp theApp;
	system("pause");
	return theApp.OnExecute();
}

