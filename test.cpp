#include "test.h"


SceneManager* SceneManager::GetInstance() {
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene(int sceneNo) {
	//currentSceneNo = 0;
	currentSceneNo = sceneNo;

	while (true)
	{
		switch (currentSceneNo) {
		case 0:
			printf("Title\n");
			break;
		case 1:
			printf("NewGame\n");
			break;
		case 2:
			printf("GamePlay\n");
			break;
		case 3:
			printf("GameClear\n");
			break;
		default:
			break;
		}

		int key = _getch();
		if (key == 27) // ESC
		{
			break;
		}
		else if (key == 32) // SPACE
		{
			currentSceneNo++;
			if (currentSceneNo == 4)
			{
				currentSceneNo = 0;
			}
		}
	}
}