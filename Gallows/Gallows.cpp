#include "Includes.h"


void Store(Alphabeth_Font*& gameFont, HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo) {
	int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
	COORD textPosition;
	textPosition.X = consoleWidth / 2 - (48 / 2) + 1;

	int pageNum = 0;
	vector<string> page = {
		"################################################",
		"#                    Doom                      #",
		"#                                              #",
		"#       _______ _____  _____ ___  ___          #",
		"#       |  _  \\|  _  ||  _  ||  \\/  |          #",
		"#       | | | || | | || | | || .  . |          #",
		"#       | | | || | | || | | || |\\/| |          #",
		"#       | |/ / \\ \\_/ /\\ \\_/ /| |  | |          #",
		"#       |___/   \\___/  \\___/ \\_|  |_/'         #",
		"#                                              #",
		"#                 [ choose ]                   #",
		"#                                              #",
		"################################################"
	};
	while (true) {
		textPosition.Y = 20;
		system("cls");
		for (int i = 0; i < 13; i++)
		{
			SetConsoleCursorPosition(hConsole, textPosition);
			cout << page[i] << endl;
			textPosition.Y++;
		}
		int choise = _getch();
		if (choise == 13) {
			if (pageNum == 0) {
				gameFont = new DefaultFont();
			}
			else {
				gameFont = new JackyFont();
			}
			break;
		}
		else {
			if (choise == 75 && pageNum != 0) {
				pageNum--;
				page = {
					"################################################",
					"#                    Doom                      #",
					"#                                              #",
					"#       _______ _____  _____ ___  ___          #",
					"#       |  _  \\|  _  ||  _  ||  \\/  |          #",
					"#       | | | || | | || | | || .  . |          #",
					"#       | | | || | | || | | || |\\/| |          #",
					"#       | |/ / \\ \\_/ /\\ \\_/ /| |  | |          #",
					"#       |___/   \\___/  \\___/ \\_|  |_/'         #",
					"#                                              #",
					"#                 [ choose ]                   #",
					"#                                              #",
					"################################################"
				};
			}
			else if (choise == 77 && pageNum != 1) {
				pageNum++;
				page = {
					"################################################",
					"#                    Jakcy                     #",
					"#                                              #",
					"#  ________  ____    __   ___  ____ __      __ #",
					"# (___  ___)(    )  () ) / __)/ ___)) \\    / ( #",
					"#     ) )   / /\\ \\  ( (_/ /  / /     \\ \\  / /  #",
					"#    ( (   ( (__) ) ()   (  ( (       \\ \\/ /   #",
					"# __  ) )   )    (  () /\\ \\ ( (        \\  /    #",
					"#( (_/ /   /  /\\  \\ ( (  \\ \\ \\ \\___     )(     #",
					"# \\___/   /__(  )__\\()_)  \\_\\ \\____)   /__\\    #",
					"#                                              #",
					"#                  [ choose ]                  #",
					"################################################"
				};
			}
		}
	}
}

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

	Alphabeth_Font* gameFont = new DefaultFont();
	int wayVariant = 0;
	while (true) {
		int arrPoint = analys->Chooser(wayVariant);
		if (arrPoint == 2) {
			if (wayVariant == 1) {
				delete scene;
				delete gameFont;
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
							Store(gameFont, hConsole, consoleInfo);
							wayVariant = 0;
							system("cls");
							scene = new MainScene();
							scene->SetSceneContent();
							scene->MenuArrMove(0, hConsole, consoleInfo);
							break;
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
									Game(hConsole, consoleInfo, wayVariant, gameFont);
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