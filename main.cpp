#include "Enemy.h"

using namespace std;


int Enemy::num_enemies = 0;

int main() {
	Enemy e1;
	Enemy e2;
	Enemy e3;

	e1.Draw();
	e2.Draw();
	e3.Draw();
	printf("---\n");

	e2.SetDeath();
	printf("“G‚ðˆê‘Ì“|‚µ‚½\n");

	e1.Draw();
	e2.Draw();
	e3.Draw();
	printf("---\n");

	e1.Update();
	e2.Update();
	e3.Update();
	printf("---\n");

	e1.Draw();
	e2.Draw();
	e3.Draw();
	printf("---\n");

	return 0;
}