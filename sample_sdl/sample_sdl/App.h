#pragma once
#include <SDL.h>

class CApp
{
private:

	bool Running;
	SDL_Surface* Surf_Display;

public:

	CApp(void);
	int OnExecute(void);
	bool OnInit();
	void OnEvent(SDL_Event* Event);
	void OnLoop();
	void OnRender();
	void OnCleanup();
	~CApp(void);

};

