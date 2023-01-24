#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string>

class SceneManager final{
public:
	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);

	void nu();

	SceneManager& operator=(const SceneManager& obj) = delete;

	SceneManager(const SceneManager& obj) = delete;

private:
	SceneManager() {};

	~SceneManager() {};

	int currentSceneNo;

};