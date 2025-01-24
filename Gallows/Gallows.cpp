#include "Includes.h"

int main()
{
	HWND consoleWindow = GetConsoleWindow();
	ShowWindow(consoleWindow, SW_MAXIMIZE);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);

	Scene* scene = new MainScene();
	scene->SetSceneContent();
	scene->MenuArrMove(0, hConsole, consoleInfo);
	Analysis_Chooser* analys = new Default_Chooser();
	int wayVariant = 0;
	while (true) {
		int arrPoint = analys->Chooser(wayVariant);
		if (arrPoint == 2) {
			if (wayVariant == 1) {
				delete scene;
				exit(0);
			}
			else {
				system("cls");
				scene = new OptionScene();
				scene->SetSceneContent();
				scene->MenuArrMove(0, hConsole, consoleInfo);
				while (true) {
					arrPoint = analys->Chooser(wayVariant);
					if (arrPoint == 2) {
						if (wayVariant == 1) {
							delete scene;
							exit(0);
						}
						else {
							system("cls");
							scene = new ModsScene();
							scene->SetSceneContent();
							scene->MenuArrMove(0, hConsole, consoleInfo);
							analys = new Triple_Chooser();
							while (true) {
								arrPoint = analys->Chooser(wayVariant);
								if (arrPoint == 3) {
									Game(hConsole, consoleInfo, wayVariant);
									system("cls");
									scene = new OptionScene();
									scene->SetSceneContent();
									scene->MenuArrMove(0, hConsole, consoleInfo);
									analys = new Default_Chooser();
									break;
								}
								else if (arrPoint == 4) {
									system("cls");
									scene = new OptionScene();
									scene->SetSceneContent();
									scene->MenuArrMove(0, hConsole, consoleInfo);
									analys = new Default_Chooser();
									break;
								}
								else {
									system("cls");
									scene->MenuArrMove(arrPoint, hConsole, consoleInfo);
								}
							}
						}
					}
					else if (arrPoint == 3) {
						system("cls");
						scene = new MainScene();
						scene->SetSceneContent();
						scene->MenuArrMove(0, hConsole, consoleInfo);
						break;
					}
					else {
						system("cls");
						scene->MenuArrMove(arrPoint, hConsole, consoleInfo);
					}
				}
			}
		}
		else {
			system("cls");
			scene->MenuArrMove(arrPoint, hConsole, consoleInfo);
		}
	}
}