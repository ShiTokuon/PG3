#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;


class Enemy {
public:
	enum class State {
		kApproach,
		kAttack,
		kRetreat,
	};
	static void (Enemy::* state_table[])();

	State state;

	void Update();

	void Approach();

	void Attack();

	void Retreat();
};