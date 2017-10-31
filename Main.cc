#include <SDL.h>		// Always needs to be included for an SDL app
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "GameEngine.hh"

int main(int, char*[]) 
{
	Game game;
	game.Run();
	return 0;
}