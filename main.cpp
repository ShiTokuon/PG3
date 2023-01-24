#include "Enemy.h"

using namespace std;


int Enemy::num_enemies = 0;

int main() {
	Enemy* e1 = new Enemy;
	Enemy* e2 = new Enemy;
	Enemy* e3 = new Enemy;

	std::cout << "Enemy: " << Enemy::num_enemies << std::endl;

	delete e1;
	delete e2;
	delete e3;

	std::cout << "Enemy: " << Enemy::num_enemies << std::endl;

	return 0;
}