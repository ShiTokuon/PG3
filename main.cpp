#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include "SceneManager.h"

using namespace std;


int main()
{
	printf("Press Space to Scene Change\n\n");

	SceneManager*scenemanager = SceneManager::GetInstance();
	scenemanager->ChangeScene(0);

	return 0;
}