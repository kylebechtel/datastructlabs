#include "StdAfx.h"
#include "App_OnInit.h"
#include "App.h"



CApp_OnInit::CApp_OnInit(void)
{
}

bool CApp::OnInit(){
	if(SDL_Init(SDL_Init_EVERTYTHING) < 0) 
		return false;
	if((Surf_Display = SDL_SetVideoMode(640, 480, SDL_HWSURFACE|SDL_DOUBLEBUF)) == NULL)
		return false;

	return true;

}


CApp_OnInit::~CApp_OnInit(void)
{
}
