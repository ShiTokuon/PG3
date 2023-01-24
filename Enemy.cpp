#include "Enemy.h"

void (Enemy::* Enemy::state_table[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Retreat
};

void Enemy::Update() {
	for (int i = 0; i < 3; i++) {
		(this->*state_table[static_cast<size_t>(i)])();
	}
}

void Enemy::Approach() {
	printf("Ú‹ß");

}

void Enemy::Attack() {
	printf("ËŒ‚");
}

void Enemy::Retreat() {
	printf("—£’E");
}
