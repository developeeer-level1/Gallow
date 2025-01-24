#include <vector>
#include <conio.h>

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