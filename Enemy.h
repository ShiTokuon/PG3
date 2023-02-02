#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string>

class Enemy {
protected:
public:
	static int num_enemies;
	Enemy();
	~Enemy();

	bool IsAlive();

	void Draw();
	void Update();
	void SetDeath();

public:
	static bool isAllAlive;
private:
	bool isAlive;
};