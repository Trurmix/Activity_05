#pragma once
#include "Scene.hh"

class LevelScene : public Scene 
{
public:
    explicit LevelScene();
	~LevelScene() override;
	void OnEntry(void) override;
	void OnExit(void) override;
	void Update(void) override;
	void Draw(void) override;
private:
	
};