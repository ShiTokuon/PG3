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
	Enemy() {num_enemies++;	}
	~Enemy() {num_enemies--;}
};