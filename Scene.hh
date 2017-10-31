#pragma once
#include <SDL.h>		
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <vector>

enum class SceneState
{
	RUNNING,
	GOTO,
	EXIT
};

class Scene
{
public:
	explicit Scene() = default;
    virtual ~Scene() = default;

	virtual void OnEntry() = 0;
	virtual void OnExit() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	inline SceneState SetState(void) const { return currentState; };
	inline SceneState GetState(void) const { return currentState; };

protected:
	SceneState currentState{ SceneState::RUNNING };

};

