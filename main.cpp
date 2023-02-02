#include "Enemy.h"


int main() {
	Enemy* enemy = new Enemy();
	enemy->Update();

	delete enemy;
	return 0;
}

//class Enemy {
//public:
//	void (Enemy::* state_)();
//	void approach() { std::cout << "approach" << std::endl; }
//	void shoot() { std::cout << "shoot" << std::endl; }
//	void leave() { std::cout << "leave" << std::endl; }
//};
//
//int main() {
//	Enemy e;
//	e.state_ = &Enemy::approach;
//	(e.*e.state_)();
//	e.state_ = &Enemy::shoot;
//	(e.*e.state_)();
//	e.state_ = &Enemy::leave;
//	(e.*e.state_)();
//}