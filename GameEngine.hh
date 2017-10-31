#pragma once
#include "MenuScene.hh"
#include "LevelScene.hh"
#include "Scene.hh"

enum class GameState
{
	RUNNING,
	GOTO,
	EXIT
};

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

private:
	void Run(std::string &&name) {
		
		while (m_GameState != GameState::EXIT)
		{
			switch (GameEngine)
			{
			default:
				break;
			}
		}
	}

	GameEngine* m_GameState = nullptr;
	Scene *m_SceneState;
};
