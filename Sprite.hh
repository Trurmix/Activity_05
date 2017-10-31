#pragma once

#include "Renderer.hh"

class Sprite : public Renderer
{
public:
	Sprite();
	~Sprite();

	SDL_Texture *cloudTexture{ IMG_LoadTexture(R.Instance, "../../res/img/kintoun.png") };	//Cloud
	if (cloudTexture == nullptr) throw "No s'han pogut crear les textures";
	SDL_Rect cloudRect{ 0, 0, 350, 189 };

	SDL_Texture *bagTexture{ IMG_LoadTexture(renderer, "../../res/img/gold.png") };	//Gold
	if (bagTexture == nullptr) throw "No s'han pogut crear les textures";
	SDL_Rect bagRect{ 0, 0, 150, 113 };

	SDL_Rect playerTarget{ 0, 0, 100, 100 };

private:

};
