#include "StdAfx.h"
#include "App.h"



CApp::CApp(void)
{Running = true;
}

int CApp::OnExecute()
{
	if(OnInit() == false){
	return -1;
	}

	SDL_Event Event;

	while(Running) {
		while(SDL_PollEvent(&Event)){
		OnEvent(&Event);
		}
		OnLoop();
		OnRender();
	}

	OnCleanup();

	return 0;
}

CApp::~CApp(void)
{
}
