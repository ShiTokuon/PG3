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
	printf("更新処理\n");
	if (isAllAlive == false) {
		isAlive = false;
	}
}

void Enemy::Draw() {
	if (IsAlive()) {
		printf("敵の表示\n");
	}
}