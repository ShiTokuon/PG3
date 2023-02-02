#include "Enemy.h"

bool Enemy::isAllAlive = false;

Enemy::Enemy() {
	isAlive = true;
	isAllAlive = true;
}

Enemy::~Enemy() {}

bool Enemy::IsAlive() {
	return isAlive;
}

void Enemy::SetDeath() {
	isAlive = false;
	isAllAlive = false;
}

void Enemy::Update() {
	printf("XVˆ—\n");
	if (isAllAlive == false) {
		isAlive = false;
	}
}

void Enemy::Draw() {
	if (IsAlive()) {
		printf("“G‚Ì•\¦\n");
	}
}