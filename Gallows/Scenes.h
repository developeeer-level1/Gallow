#include <iostream>
#include <vector>
class Scene {
protected:
	vector<string> scene;
public:
	virtual void SetSceneContent() = 0;
	virtual void MenuArrMove(int pos, HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo) = 0;
};

class MainScene : public Scene {
public:
	void SetSceneContent() override {
		scene = {
			"\t ,ad8888ba,                88  88                                                    ",
			"\t d8\"'    `\"8b              88  88                                                  ",
			"\td8'                        88  88                                                    ",
			"\t88             ,adPPYYba,  88  88   ,adPPYba,   8b      db      d8  ,adPPYba,        ",
			"\t88      88888  \"\"     `Y8  88  88  a8\"     \"8a  `8b    d88b    d8'  I8[    \"\"  ",
			"\tY8,        88  ,adPPPPP88  88  88  8b       d8   `8b  d8'`8b  d8'    `\"Y8ba,        ",
			"\t Y8a.    .a88  88,    ,88  88  88  \"8a,   ,a8\"    `8bd8'  `8bd8'    aa    ]8I      ",
			"\t  `\"Y88888P\"   `\"8bbdP\"Y8  88  88   `\"YbbdP\"'       YP      YP      `\"YbbdP\"'",
			"\t                                                                                     ",
			"\t                            _____  __                __                              ",
			"\t                           / ___/ / /_ ____ _ _____ / /_                             ",
			"\t                           \\__ \\ / __// __ `// ___// __/                           ",
			"\t                          ___/ // /_ / /_/ // /   / /_                               ",
			"\t                         /____/ \\__/ \\__,_//_/    \\__/                            ",
			"\t                               ____          _  __                                   ",
			"\t                              / __ \\ __  __ (_)/ /_                                 ",
			"\t                             / / / // / / // // __/                                  ",
			"\t                            / /_/ // /_/ // // /_                                    ",
			"\t                            \\___\\_\\\\__,_//_/ \\__/                               "
		};
	}

	void MenuArrMove(int pos, HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo) override {
		if (pos == 0) {
			scene[9][61] = '_';
			scene[10][60] = '/';
			scene[10][62] = '/';
			scene[11][59] = '/';
			scene[11][61] = '/';
			scene[12][59] = '\\';
			scene[12][61] = '\\';
			scene[13][60] = '\\';
			scene[13][62] = '\\';
			scene[13][61] = '_';

			scene[14][56] = ' ';
			scene[15][55] = ' ';
			scene[15][57] = ' ';
			scene[16][54] = ' ';
			scene[16][56] = ' ';
			scene[17][54] = ' ';
			scene[17][56] = ' ';
			scene[18][55] = ' ';
			scene[18][57] = ' ';
			scene[18][56] = ' ';
		}
		else if (pos == 1) {
			scene[9][61] = ' ';
			scene[10][60] = ' ';
			scene[10][62] = ' ';
			scene[11][59] = ' ';
			scene[11][61] = ' ';
			scene[12][59] = ' ';
			scene[12][61] = ' ';
			scene[13][60] = ' ';
			scene[13][62] = ' ';
			scene[13][61] = ' ';

			scene[14][56] = '_';
			scene[15][55] = '/';
			scene[15][57] = '/';
			scene[16][54] = '/';
			scene[16][56] = '/';
			scene[17][54] = '\\';
			scene[17][56] = '\\';
			scene[18][55] = '\\';
			scene[18][57] = '\\';
			scene[18][56] = '_';
		}
		int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
		int consoleHeight = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top;

		int centerX = consoleWidth / 2 - (scene[0].length() / 2);
		int centerY = consoleHeight / 2 - (scene.size() / 2);

		COORD textPosition;
		textPosition.X = centerX;
		for (int i = 0; i < 19; i++) {

			textPosition.Y = centerY + i;
			SetConsoleCursorPosition(hConsole, textPosition);
			cout << scene[i] << endl;
		}
	}
};

class OptionScene : public Scene {
public:
	void SetSceneContent() override {
		scene = {
		"               ______                           __  ___            __                        ",
		"              / ____/____ _ ____ ___   ___     /  |/  /____   ____/ /_____                ",
		"             / / __ / __ `// __ `__ \\ / _ \\   / /|_/ // __ \\ / __  // ___/                ",
		"            / /_/ // /_/ // / / / / //  __/  / /  / // /_/ // /_/ /(__  )                ",
		"            \\____/ \\__,_//_/ /_/ /_/ \\___/  /_/  /_/ \\____/ \\__,_//____/                 ",
		"                             _____  __                                                           ",
		"                            / ___/ / /_ ____   _____ ___                                           ",
		"                            \\__ \\ / __// __ \\ / ___// _ \\                                 ",
		"                           ___/ // /_ / /_/ // /   /  __/                                 ",
		"                          /____/ \\__/ \\____//_/    \\___/                                 "
		};

	}

	void MenuArrMove(int pos, HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo) override {
		if (pos == 0) {
			scene[0][78] = '_';
			scene[1][77] = '/';
			scene[1][79] = '/';
			scene[2][76] = '/';
			scene[2][78] = '/';
			scene[3][76] = '\\';
			scene[3][78] = '\\';
			scene[4][77] = '\\';
			scene[4][79] = '\\';
			scene[4][78] = '_';

			scene[5][62] = ' ';
			scene[6][61] = ' ';
			scene[6][63] = ' ';
			scene[7][60] = ' ';
			scene[7][62] = ' ';
			scene[8][60] = ' ';
			scene[8][62] = ' ';
			scene[9][61] = ' ';
			scene[9][63] = ' ';
			scene[9][62] = ' ';
		}
		else if (pos == 1) {
			scene[0][78] = ' ';
			scene[1][77] = ' ';
			scene[1][79] = ' ';
			scene[2][76] = ' ';
			scene[2][78] = ' ';
			scene[3][76] = ' ';
			scene[3][78] = ' ';
			scene[4][77] = ' ';
			scene[4][79] = ' ';
			scene[4][78] = ' ';

			scene[5][62] = '_';
			scene[6][61] = '/';
			scene[6][63] = '/';
			scene[7][60] = '/';
			scene[7][62] = '/';
			scene[8][60] = '\\';
			scene[8][62] = '\\';
			scene[9][61] = '\\';
			scene[9][63] = '\\';
			scene[9][62] = '_';
		}
		int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
		int consoleHeight = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top;

		int centerX = consoleWidth / 2 - (scene[0].length() / 2);
		int centerY = consoleHeight / 2 - (scene.size() / 2);

		COORD textPosition;
		textPosition.X = centerX;
		for (int i = 0; i < 10; i++) {
			textPosition.Y = centerY + i;
			SetConsoleCursorPosition(hConsole, textPosition);
			cout << scene[i] << endl;
		}
	}
};

class ModsScene : public Scene {
public:
	void SetSceneContent() override {
		scene = {
		"                                             __  ___ ______ __  ___ ______                              ",
		"                                            /  |/  // ____//  |/  // ____/                              ",
		"                                           / /|_/ // __/  / /|_/ // __/                                 ",
		"                                          / /  / // /___ / /  / // /___                                 ",
		"                                         /_/  /_//_____//_/  /_//_____/                                 ",
		"                                    _   __ ____   ____   __  ___ ___     __                             ",
		"                                   / | / // __ \\ / __ \\ /  |/  //   |   / /                           ",
		"                                  /  |/ // / / // /_/ // /|_/ // /| |  / /                              ",
		"                                 / /|  // /_/ // _, _// /  / // ___ | / /__                             ",
		"                                /_/ |_/ \\____//_/ |_|/_/  /_//_/  |_|/_____/                           ",
		"                  ____   ____   ____   ______ ____   ___     __  ___ __  ___ ____ _   __ ______         ",
		"                 / __ \\ / __ \\ / __ \\ / ____// __ \\ /   |   /  |/  //  |/  //  _// | / // ____/     ",
		"                / /_/ // /_/ // / / // / __ / /_/ // /| |  / /|_/ // /|_/ / / / /  |/ // / __           ",
		"               / ____// _, _// /_/ // /_/ // _, _// ___ | / /  / // /  / /_/ / / /|  // /_/ /           ",
		"              /_/    /_/ |_| \\____/ \\____//_/ |_|/_/  |_|/_/  /_//_/  /_//___//_/ |_/ \\____/         ",
		"                                                                        "
		};

	}

	void MenuArrMove(int pos, HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo) override {
		if (pos == 0) {
			scene[0][77] = '_';
			scene[1][76] = '/';
			scene[1][78] = '/';
			scene[2][75] = '/';
			scene[2][77] = '/';
			scene[3][75] = '\\';
			scene[3][77] = '\\';
			scene[4][76] = '\\';
			scene[4][78] = '\\';
			scene[4][77] = '_';

			scene[5][80] = ' ';
			scene[6][79] = ' ';
			scene[6][81] = ' ';
			scene[7][78] = ' ';
			scene[7][80] = ' ';
			scene[8][78] = ' ';
			scene[8][80] = ' ';
			scene[9][79] = ' ';
			scene[9][81] = ' ';
			scene[9][80] = ' ';

			scene[10][98] = ' ';
			scene[11][97] = ' ';
			scene[11][99] = ' ';
			scene[12][96] = ' ';
			scene[12][98] = ' ';
			scene[13][96] = ' ';
			scene[13][98] = ' ';
			scene[14][97] = ' ';
			scene[14][99] = ' ';
			scene[14][98] = ' ';
		}
		else if (pos == 1) {
			scene[5][80] = '_';
			scene[6][79] = '/';
			scene[6][81] = '/';
			scene[7][78] = '/';
			scene[7][80] = '/';
			scene[8][78] = '\\';
			scene[8][80] = '\\';
			scene[9][79] = '\\';
			scene[9][81] = '\\';
			scene[9][80] = '_';

			scene[0][77] = ' ';
			scene[1][76] = ' ';
			scene[1][78] = ' ';
			scene[2][75] = ' ';
			scene[2][77] = ' ';
			scene[3][75] = ' ';
			scene[3][77] = ' ';
			scene[4][76] = ' ';
			scene[4][78] = ' ';
			scene[4][77] = ' ';

			scene[10][98] = ' ';
			scene[11][97] = ' ';
			scene[11][99] = ' ';
			scene[12][96] = ' ';
			scene[12][98] = ' ';
			scene[13][96] = ' ';
			scene[13][98] = ' ';
			scene[14][97] = ' ';
			scene[14][99] = ' ';
			scene[14][98] = ' ';
		}
		else if (pos == 2) {
			scene[10][98] = '_';
			scene[11][97] = '/';
			scene[11][99] = '/';
			scene[12][96] = '/';
			scene[12][98] = '/';
			scene[13][96] = '\\';
			scene[13][98] = '\\';
			scene[14][97] = '\\';
			scene[14][99] = '\\';
			scene[14][98] = '_';

			scene[5][80] = ' ';
			scene[6][79] = ' ';
			scene[6][81] = ' ';
			scene[7][78] = ' ';
			scene[7][80] = ' ';
			scene[8][78] = ' ';
			scene[8][80] = ' ';
			scene[9][79] = ' ';
			scene[9][81] = ' ';
			scene[9][80] = ' ';
		}
		int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
		int consoleHeight = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top;

		int centerX = consoleWidth / 2 - (scene[0].length() / 2);
		int centerY = consoleHeight / 2 - (scene.size() / 2);

		COORD textPosition;
		textPosition.X = centerX - 3;
		for (int i = 0; i < 15; i++) {
			textPosition.Y = centerY + i;
			SetConsoleCursorPosition(hConsole, textPosition);
			cout << scene[i] << endl;
		}
	}
};
