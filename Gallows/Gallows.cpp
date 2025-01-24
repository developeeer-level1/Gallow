#include <iostream>
#include <vector>
#include <windows.h>
#include <conio.h>
using namespace std;

class Mode {
	bool mode;
	int probabilityWord;
	vector<string> words;
public:
	Mode(int mode) {
		probabilityWord = 0;
		srand(time(0));
		this->mode = mode;
		switch (this->mode)
		{
		case 1:
			words = {
				"Imagine", "Selection", "Trial", "Freighter", "Overlook", "Courtesy", "Practical", "Discreet", "Robot",
				"Pain", "Debut", "Like", "Convert", "Spine", "Health", "Season", "Economic", "Appendix", "Red",
				"Vat", "Ghostwriter", "Stool", "Snail", "Retiree", "Seal", "Hell", "Ignorant", "Hair", "Triangle",
				"Measure", "Exercise", "Guitar", "Circle", "Kick", "Grandfather", "Passion", "Create", "Construct", "Sell",
				"Clarify", "Expose", "Oral", "Cut", "Cellar", "Silence", "Tablet", "Soft", "Neglect", "Polish", "Norm",
				"Truth", "Delivery", "Competition", "Guidance", "Advertising", "Paper", "Farmer", "Explanation",
				"Surgery", "Activity", "Grandmother", "Mixture", "Depression", "Reflection", "Childhood", "Analysis",
				"Agency", "Criticism", "Complaint", "Significance", "Knowledge", "Library", "Role", "Owner", "Climate",
				"Attention", "Area", "Apartment", "President", "Desk", "Inspection", "Description", "Discussion",
				"Painting", "Supermarket", "Fact", "Depth", "Winner", "Baseball", "Transportation", "Lake", "Tongue",
				"Wood", "Basket", "Obligation", "Dirt", "Basis", "Procedure"
			};
			probabilityWord = rand() % words.size();
			break;
		case 0:
			words = {
				"Conditions", "Pickme", "Venom", "Spider",
				"Abayudna", "Bebra", "Trollface", "Pdiddy", "Lmao", "Vibing", "Noob", "Flex", "SUS", "Amogus",
				"Kek", "Lol", "Bruh", "Ambatukam", "Doge", "Rickroll", "Simp", "Triggered", "Gigachad", "Karen", "Misha",
				"Kakish", "Tiktok", "Chillguy", "Roblox", "Meme", "Sussy", "Stonks", "Zoomer", "Carphique", "Lizarklaun",
				"Cocomelon", "Mrbeast", "Fiasko"
			};
			probabilityWord = rand() % words.size();
			break;
		default:
			break;
		}
	};
	string Returner() {
		return words[probabilityWord];
	}


};


class Alphabeth_Font {
protected:
	vector<vector<string>> all_letters;
public:
	virtual void MainFont() = 0;
	vector<vector<string>> geter() {
		return all_letters;
	}
};

class Keyboard_Font {
protected:
	vector<vector<string>> keyboard_letters;
public:
	virtual void KeyboardFont() = 0;
	vector<vector<string>> geter() {
		return keyboard_letters;
	}
	void setLine(int y, int x, string line) {
		keyboard_letters[y][x] = line;
	}
};

class DefaultFont : public Alphabeth_Font {
public:
	void MainFont() override {
		all_letters = {
		   {
			   "   ___   ",
			   "  / _ \\  ",
			   " / /_\\ \\ ",
			   " |  _  | ",
			   " | | | | ",
			   " \\_| |_/ ",
			   "         ",
			   "         "
		   },
		   {
			   " ______  ",
			   " | ___ \\ ",
			   " | |_/ / ",
			   " | ___ \\ ",
			   " | |_/ / ",
			   " \\____/  ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " /  __ \\ ",
			   " | /  \\/ ",
			   " | |     ",
			   " | \\__/\\ ",
			   "  \\____/ ",
			   "         ",
			   "         "
		   },
		   {
			   " ______  ",
			   " |  _  \\ ",
			   " | | | | ",
			   " | | | | ",
			   " | |/ /  ",
			   " |___/   ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " |  ___| ",
			   " | |__   ",
			   " |  __|  ",
			   " | |___  ",
			   " \\____/  ",
			   "         ",
			   "         "
		   },
		   {
			   " ______  ",
			   " |  ___| ",
			   " | |_    ",
			   " |  _|   ",
			   " | |     ",
			   " \\_|     ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " |  __ \\ ",
			   " | |  \\/ ",
			   " | | __  ",
			   " | |_\\ \\ ",
			   "  \\____/ ",
			   "         ",
			   "         "
		   },
		   {
			   "  _   _  ",
			   " | | | | ",
			   " | |_| | ",
			   " |  _  | ",
			   " | | | | ",
			   " \\_| |_/ ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " |_   _| ",
			   "   | |   ",
			   "   | |   ",
			   "  _| |_  ",
			   "  \\___/  ",
			   "         ",
			   "         "
		   },
		   {
			   "    ___  ",
			   "   |_  | ",
			   "     | | ",
			   "     | | ",
			   " /\\__/ / ",
			   " \\____/  ",
			   "         ",
			   "         "
		   },
		   {
			   "  _   __ ",
			   " | | / / ",
			   " | |/ /  ",
			   " |    \\  ",
			   " | |\\  \\ ",
			   " \\_| \\_/ ",
			   "         ",
			   "         "
		   },
		   {
			   "  _      ",
			   " | |     ",
			   " | |     ",
			   " | |     ",
			   " | |____ ",
			   " \\_____/ ",
			   "         ",
			   "         "
		   },
		   {
			   " ___  ___ ",
			   " |  \\/  | ",
			   " | .  . | ",
			   " | |\\/| | ",
			   " | |  | | ",
			   " \\_|  |_/ ",
			   "          ",
			   "          "
		   },
		   {
			   "  _   _  ",
			   " | \\ | | ",
			   " |  \\| | ",
			   " | . ` | ",
			   " | |\\  | ",
			   " \\_| \\_/ ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " |  _  | ",
			   " | | | | ",
			   " | | | | ",
			   " \\ \\_/ / ",
			   "  \\___/  ",
			   "         ",
			   "         "
		   },
		   {
			   " ______  ",
			   " | ___ \\ ",
			   " | |_/ / ",
			   " |  __/  ",
			   " | |     ",
			   " \\_|     ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " |  _  | ",
			   " | | | | ",
			   " | | | | ",
			   " \\ \\/' / ",
			   "  \\_/\\_\\ ",
			   "         ",
			   "         "
		   },
		   {
			   " ______  ",
			   " | ___ \\ ",
			   " | |_/ / ",
			   " |    /  ",
			   " | |\\ \\  ",
			   " \\_| \\_| ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " /  ___| ",
			   " \\ `--.  ",
			   "  `--. \\ ",
			   " /\\__/ / ",
			   " \\____/  ",
			   "         ",
			   "         "
		   },
		   {
			   "  _____  ",
			   " |_   _| ",
			   "   | |   ",
			   "   | |   ",
			   "   | |   ",
			   "   \\_/   ",
			   "         ",
			   "         "
		   },
		   {
			   "  _   _  ",
			   " | | | | ",
			   " | | | | ",
			   " | | | | ",
			   " | |_| | ",
			   "  \\___/  ",
			   "         ",
			   "         "
		   },
		   {
			   "  _   _  ",
			   " | | | | ",
			   " | | | | ",
			   " | | | | ",
			   " \\ \\_/ / ",
			   "  \\___/  ",
			   "         ",
			   "         "
		   },
		   {
			   "  _    _  ",
			   " | |  | | ",
			   " | |  | | ",
			   " | |/\\| | ",
			   " \\  /\\  / ",
			   "  \\/  \\/  ",
			   "          ",
			   "          "
		   },
		   {
			   " __   __ ",
			   " \\ \\ / / ",
			   "  \\ V /  ",
			   "  /   \\  ",
			   " / /^\\ \\ ",
			   " \\/   \\/ ",
			   "         ",
			   "         "
		   },
		   {
			   " __   __ ",
			   " \\ \\ / / ",
			   "  \\ V /  ",
			   "   \\ /   ",
			   "   | |   ",
			   "   \\_/   ",
			   "         ",
			   "         "
		   },
		   {
			   "  ______ ",
			   " |___  / ",
			   "    / /  ",
			   "   / /   ",
			   " ./ /___ ",
			   " \\_____/ ",
			   "         ",
			   "         "
		   },
		   {
			   "         ",
			   "         ",
			   "   __ _  ",
			   "  / _` | ",
			   " | (_| | ",
			   "  \\__,_| ",
			   "         ",
			   "         "//a
		   },
		   {
			   "  _      ",
			   " | |     ",
			   " | |__   ",
			   " | '_ \\  ",
			   " | |_) | ",
			   " |_.__/  ",
			   "         ",
			   "         "//b
		   },
		   {
			   "        ",
			   "        ",
			   "   ___  ",
			   "  / __| ",
			   " | (__  ",
			   "  \\___| ",
			   "        ",
			   "        "//c
		   },
		   {
			   "      _  ",
			   "     | | ",
			   "   __| | ",
			   "  / _` | ",
			   " | (_| | ",
			   "  \\__,_| ",
			   "         ",
			   "         "//d
		   },
		   {
			   "        ",
			   "        ",
			   "   ___  ",
			   "  / _ \\ ",
			   " |  __/ ",
			   "  \\___| ",
			   "        ",
			   "        "//e
		   },
		   {
			   "       ",
			   "   __  ",
			   "  / _| ",
			   " | |_  ",
			   " |  _| ",
			   " |_|   ",
			   "       ",
			   "       "//f
		   },
		   {
			   "         ",
			   "         ",
			   "   __ _  ",
			   "  / _` | ",
			   " | (_| | ",
			   "  \\__, | ",
			   "   __/ | ",
			   "  |___/  "//g

		   },
		   {
			   "  _      ",
			   " | |     ",
			   " | |__   ",
			   " | '_ \\  ",
			   " | | | | ",
			   " |_| |_| ",
			   "         ",
			   "         "
		   },
		   {
			   "  _  ",
			   " (_) ",
			   "  _  ",
			   " | | ",
			   " | | ",
			   " |_| ",
			   "     ",
			   "     "
		   },
		   {
			   "   _   ",
			   "  (_)  ",
			   "   _   ",
			   "  | |  ",
			   "  | |  ",
			   "  | |  ",
			   " _/ |  ",
			   "|__/   "
		   },
		   {
			   "  _     ",
			   " | |    ",
			   " | | __ ",
			   " | |/ / ",
			   " |   <  ",
			   " |_|\\_\\ ",
			   "        ",
			   "        "
		   },
		   {
			   "  _  ",
			   " | | ",
			   " | | ",
			   " | | ",
			   " | | ",
			   " |_| ",
			   "     ",
			   "     "
		   },
		   {
			   "             ",
			   "             ",
			   "  _ __ ___   ",
			   " | '_ ` _ \\  ",
			   " | | | | | | ",
			   " |_| |_| |_| ",
			   "             ",
			   "             "
		   },
		   {
			   "         ",
			   "         ",
			   "  _ __   ",
			   " | '_ \\  ",
			   " | | | | ",
			   " |_| |_| ",
			   "         ",
			   "         "
		   },
		   {
			   "         ",
			   "         ",
			   "   ___   ",
			   "  / _ \\  ",
			   " | (_) | ",
			   "  \\___/  ",
			   "         ",
			   "         "
		   },
		   {
			   "         ",
			   "         ",
			   "  _ __   ",
			   " | '_ \\  ",
			   " | |_) | ",
			   " | .__/  ",
			   " | |     ",
			   " |_|     "
		   },
		   {
			   "         ",
			   "         ",
			   "   __ _  ",
			   "  / _` | ",
			   " | (_| | ",
			   "  \\__, | ",
			   "     | | ",
			   "     |_| "
		   },
		   {
			   "        ",
			   "        ",
			   "  _ __  ",
			   " | '__| ",
			   " | |    ",
			   " |_|    ",
			   "        ",
			   "        "
		   },
		   {
			   "       ",
			   "       ",
			   "  ___  ",
			   " / __| ",
			   " \\__ \\ ",
			   " |___/ ",
			   "       ",
			   "       "
		   },
		   {
			   "    _    ",
			   "   | |   ",
			   "  _| |_  ",
			   " |__ __| ",
			   "   | |_  ",
			   "    \\__| ",
			   "         ",
			   "         "
		   },
		   {
			   "         ",
			   "         ",
			   "  _   _  ",
			   " | | | | ",
			   " | |_| | ",
			   "  \\__,_| ",
			   "         ",
			   "         "
		   },
		   {
			   "         ",
			   "         ",
			   " __   __ ",
			   " \\ \\ / / ",
			   "  \\ V /  ",
			   "   \\_/   ",
			   "         ",
			   "         "
		   },
		   {
			   "             ",
			   "             ",
			   " __      __  ",
			   " \\ \\ /\\ / /  ",
			   "  \\ V  V /   ",
			   "   \\_/\\_/    ",
			   "             ",
			   "             "
		   },
		   {
			   "        ",
			   "        ",
			   " __  __ ",
			   " \\ \\/ / ",
			   "  >  <  ",
			   " /_/\\_\\ ",
			   "        ",
			   "        "
		   },
		   {
			   "         ",
			   "         ",
			   "  _   _  ",
			   " | | | | ",
			   " | |_| | ",
			   "  \\__, | ",
			   "   __/ | ",
			   "  |___/  "
		   },
		   {
			   "       ",
			   "       ",
			   "  ____ ",
			   " |_  / ",
			   "  / /  ",
			   " /___| ",
			   "       ",
			   "       "
		   }
		};
	}
};

class BubbleFont : public Keyboard_Font {
public:
	void KeyboardFont() override {
		keyboard_letters = {
			{
		"   _   ",
		"  / \\  ",
		" ( A ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( B ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( C ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( D ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( E ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( F ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( G ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( H ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( I ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( J ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( K ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( L ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( M ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( N ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( O ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( P ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( Q ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( R ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( S ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( T ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( U ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( V ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( W ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( X ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( Y ) ",
		"  \\_/  ",
		"       "
	},
	{
		"   _   ",
		"  / \\  ",
		" ( Z ) ",
		"  \\_/  ",
		"       "
	}
		};
	}
};



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



class Analysis_Chooser {
public:
	virtual int Chooser(int& gaga) = 0;
};

class Default_Chooser : public Analysis_Chooser {
public:
	int Chooser(int& gaga) override {
		int choise = _getch();
		if (choise == 13) {
			return 2;
		}
		else if (choise == 27) {
			return 3;
		}
		{
			int choise = _getch();
			if (choise == 72) {
				gaga = 0;
				return gaga;
			}
			else if (choise == 80) {
				gaga = 1;
				return gaga;
			}
		}
	}
};

class Triple_Chooser : public Analysis_Chooser {
public:
	int Chooser(int& gaga) override {
		int choise = _getch();
		if (choise == 13) {
			return 3;
		}
		else if (choise == 27) {
			return 4;
		}
		{
			int choise = _getch();
			if (choise == 72) {
				if (gaga - 1 != -1) {
					gaga -= 1;
				}
				return gaga;
			}
			else if (choise == 80) {
				if (gaga + 1 != 3) {
					gaga += 1;
				}
				return gaga;
			}
		}
	}
};


class Hangman {
	vector<string> hangman;
public:
	Hangman() {
		hangman = {
			"        ___________________            ",
			"       ||                 |            ",
			"       ||                 |            ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"       ||                              ",
			"     __||___                           ",
			"    /       \\________________________ ",
			"   /                                 \\",
			"  /___________________________________\\"
		};
	}
	void SetHangmanStage_Printing(int lives, HANDLE hConsole, int width) {
		if (lives == 5) {
			hangman[3][25] = '_';
			hangman[3][26] = '_';
			hangman[3][27] = '_';
			hangman[4][24] = '/';
			hangman[4][28] = '\\';
			hangman[5][23] = '|';
			hangman[5][29] = '|';
			hangman[6][24] = '\\';
			hangman[6][28] = '/';
			hangman[6][25] = '_';
			hangman[6][26] = '_';
			hangman[6][27] = '_';
		}
		else if (lives == 4) {
			hangman[7][26] = '|';
			hangman[8][26] = '|';
			hangman[9][26] = '|';
			hangman[10][26] = '|';
		}
		else if (lives == 3) {
			hangman[7][25] = '_';
			hangman[8][24] = '/';
			hangman[9][23] = '/';
			hangman[10][22] = '/';
		}
		else if (lives == 2) {
			hangman[7][27] = '_';
			hangman[8][28] = '\\';
			hangman[9][29] = '\\';
			hangman[10][30] = '\\';
		}
		else if (lives == 1) {
			hangman[11][25] = '/';
			hangman[12][24] = '/';
			hangman[13][23] = '/';
		}
		else if (lives == 0) {
			hangman[11][27] = '\\';
			hangman[12][28] = '\\';
			hangman[13][29] = '\\';
		}

		COORD textPosition;
		textPosition.X = width / 2 - 21;
		textPosition.Y = 0;
		system("cls");
		for (int i = 0; i < hangman.size(); i++)
		{
			SetConsoleCursorPosition(hConsole, textPosition);
			cout << hangman[i]<<endl;
			textPosition.Y++;
		}
	}
};


int CalcutatingWordPosition(string hghg, Alphabeth_Font* gameFont) {
	int lenghtWordInCharacters = 0;
	for (int i = 0; i < hghg.length(); i++)
	{
		if (hghg[i] == ' ') {
			lenghtWordInCharacters += 9;
		}
		else if (int(hghg[i]) < 97) {

			lenghtWordInCharacters += gameFont->geter()[int(hghg[i]) - 65][0].size();
		}
		else {
			lenghtWordInCharacters += gameFont->geter()[int(hghg[i]) - 71][0].size();
		}
	}
	lenghtWordInCharacters += hghg.length() + 1;
	return lenghtWordInCharacters;
}

void PrintingWord(string hghg, Alphabeth_Font* gameFont, HANDLE hConsole, int width) {
	COORD textPosition;
	textPosition.X = width / 2 - (CalcutatingWordPosition(hghg, gameFont) / 2) + 1;
	textPosition.Y = 20;
	for (int i = 0; i < 8; i++)
	{
		textPosition.Y++;
		SetConsoleCursorPosition(hConsole, textPosition);
		for (int j = 0; j < hghg.length(); j++)
		{
			if (hghg[j] == ' ') {
				cout << "|         ";
			}
			else if (int(hghg[j]) < 97) {
				cout << "|";
				cout << gameFont->geter()[int(hghg[j]) - 65][i];
			}
			else {
				cout << "|";
				cout << gameFont->geter()[int(hghg[j]) - 71][i];
			}

		}
		cout << "|";
		cout << endl;
	}
}

void PrintingKeyboard(Keyboard_Font* keyboard, int chosingLetter, HANDLE hConsole, int width) {
	COORD textPosition;
	textPosition.X = width / 2 - (70 / 2) + 1;
	textPosition.Y = 30;
	keyboard->setLine(chosingLetter, 4, " _____ ");
	for (int i = 0; i < 5; i++)
	{
		textPosition.Y++;
		SetConsoleCursorPosition(hConsole, textPosition);
		for (int j = 0; j < 10; j++)
		{
			cout << keyboard->geter()[j][i];
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		textPosition.Y++;
		SetConsoleCursorPosition(hConsole, textPosition);
		for (int j = 10; j < 20; j++)
		{
			cout << keyboard->geter()[j][i];
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		textPosition.Y++;
		SetConsoleCursorPosition(hConsole, textPosition);
		cout << "\t      ";
		for (int j = 20; j < 26; j++)
		{
			cout << keyboard->geter()[j][i];
		}
		cout << endl;
	}
}

void Game(HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo, int mode) {
	int amountOfChances = 6;
	system("cls");

	Alphabeth_Font* gameFont = new DefaultFont();
	gameFont->MainFont();
	Keyboard_Font* keyBoardFont = new BubbleFont();
	keyBoardFont->KeyboardFont();
	Hangman hangman;

	Mode obj(mode);
	string word = obj.Returner();
	word = "abcdefghijklmnopqrstuv";
	string hghg = word;
	for (int i = 0; i < hghg.length(); i++)
	{
		hghg[i] = ' ';
	}
	bool victory = false;
	system("cls");

	int chosingLetter = 0;
	int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
	while (!victory) {
		hangman.SetHangmanStage_Printing(amountOfChances, hConsole, consoleWidth);
		PrintingWord(hghg, gameFont, hConsole, consoleWidth);
		PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
		while (true) {
			int choise = _getch();
			if (choise == 13) {
				break;
			}
			else {
				choise = _getch();
				if (choise == 72 && chosingLetter > 9) {

					hangman.SetHangmanStage_Printing(amountOfChances, hConsole, consoleWidth);
					PrintingWord(hghg, gameFont, hConsole, consoleWidth);

					keyBoardFont->setLine(chosingLetter, 4, "       ");
					if (chosingLetter > 19) {
						chosingLetter -= 8;
					}
					else {
						chosingLetter -= 10;
					}
					PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);



				}
				else if (choise == 80 && chosingLetter < 20) {

					hangman.SetHangmanStage_Printing(amountOfChances, hConsole, consoleWidth);
					PrintingWord(hghg, gameFont, hConsole, consoleWidth);

					keyBoardFont->setLine(chosingLetter, 4, "       ");
					if (chosingLetter > 9) {
						if (chosingLetter > 9 && chosingLetter < 13) {
							chosingLetter = 20;
						}
						else if (chosingLetter > 16 && chosingLetter < 20) {
							chosingLetter = 25;
						}
						else {
							chosingLetter += 8;
						}
					}
					else {
						chosingLetter += 10;
					}
					PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);


				}
				else if (choise == 75 && chosingLetter != 0 && chosingLetter != 10 && chosingLetter != 20) {
					hangman.SetHangmanStage_Printing(amountOfChances, hConsole, consoleWidth);
					PrintingWord(hghg, gameFont, hConsole, consoleWidth);


					keyBoardFont->setLine(chosingLetter, 4, "       ");
					chosingLetter--;
					PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);

				}
				else if (choise == 77 && chosingLetter != 9 && chosingLetter != 19 && chosingLetter != 25) {
					hangman.SetHangmanStage_Printing(amountOfChances, hConsole, consoleWidth);
					PrintingWord(hghg, gameFont, hConsole, consoleWidth);


					keyBoardFont->setLine(chosingLetter, 4, "       ");
					chosingLetter++;
					PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
				}
			}
		}
		bool missFactor = false;
		for (int i = 0; i < hghg.length(); i++)
		{
			if (char(tolower(keyBoardFont->geter()[chosingLetter][2][3])) == word[i] || char(toupper(keyBoardFont->geter()[chosingLetter][2][3])) == word[i]/*||char(toupper(keyBoardFont->geter()[chosingLetter][2][3]))!='/' */) {
				hghg[i] = word[i];
				missFactor = true;
			}
		}
		if (missFactor == false) {
			amountOfChances--;
		}
		if (hghg == word) {
			victory = !victory;
		}
		if (amountOfChances == 0) {
			Sleep(500);
			system("cls");
			cout << "You lose!!!!!!";
			system("pause");
			victory = !victory;
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


	system("pause");
	//int numOfPage = 0;
	//
	//
	//
	//
	//
	//
	//Alphabeth_Font* gameFont = new DefaultFont();
	//gameFont->MainFont();
	//Keyboard_Font* keyBoardFont = new BubbleFont();
	//keyBoardFont->KeyboardFont();
	//
	//Mode obj(numOfPage);
	//string word = obj.Returner();
	//word = "abcdefghi";
	//string hghg = word;
	//for (int i = 0; i < hghg.length(); i++)
	//{
	//	hghg[i] = ' ';
	//}
	//bool victory = false;
	//system("cls");
	//
	//int chosingLetter = 0;
	//int consoleWidth = consoleInfo.srWindow.Right - consoleInfo.srWindow.Left;
	//while (!victory) {
	//	PrintingWord(hghg, gameFont, hConsole, consoleWidth);
	//	PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
	//	while (true) {
	//		int choise = _getch();
	//		if (choise == 13) {
	//			break;
	//		}
	//		else {
	//			choise = _getch();
	//			if (choise == 72 && chosingLetter > 9) {
	//
	//
	//				PrintingWord(hghg, gameFont, hConsole, consoleWidth);
	//
	//				keyBoardFont->setLine(chosingLetter, 4, "       ");
	//				if (chosingLetter > 19) {
	//					chosingLetter -= 8;
	//				}
	//				else {
	//					chosingLetter -= 10;
	//				}
	//				PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
	//
	//
	//
	//			}
	//			else if (choise == 80 && chosingLetter < 20) {
	//
	//
	//				system("cls");
	//				PrintingWord(hghg, gameFont, hConsole, consoleWidth);
	//
	//				keyBoardFont->setLine(chosingLetter, 4, "       ");
	//				if (chosingLetter > 9) {
	//					if (chosingLetter > 9 && chosingLetter < 13) {
	//						chosingLetter = 20;
	//					}
	//					else if (chosingLetter > 16 && chosingLetter < 20) {
	//						chosingLetter = 25;
	//					}
	//					else {
	//						chosingLetter += 8;
	//					}
	//				}
	//				else {
	//					chosingLetter += 10;
	//				}
	//				PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
	//
	//
	//			}
	//			else if (choise == 75 && chosingLetter != 0 && chosingLetter != 10 && chosingLetter != 20) {
	//
	//				system("cls");
	//				PrintingWord(hghg, gameFont, hConsole, consoleWidth);
	//
	//
	//				keyBoardFont->setLine(chosingLetter, 4, "       ");
	//				chosingLetter--;
	//				PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
	//
	//			}
	//			else if (choise == 77 && chosingLetter != 9 && chosingLetter != 19 && chosingLetter != 25) {
	//
	//				system("cls");
	//				PrintingWord(hghg, gameFont, hConsole, consoleWidth);
	//
	//
	//				keyBoardFont->setLine(chosingLetter, 4, "       ");
	//				chosingLetter++;
	//				PrintingKeyboard(keyBoardFont, chosingLetter, hConsole, consoleWidth);
	//			}
	//		}
	//	}
	//	system("cls");
	//	for (int i = 0; i < hghg.length(); i++)
	//	{
	//		if (char(tolower(keyBoardFont->geter()[chosingLetter][2][3])) == word[i] || char(toupper(keyBoardFont->geter()[chosingLetter][2][3])) == word[i]) {
	//			hghg[i] = word[i];
	//		}
	//	}
	//	if (hghg == word) {
	//		victory = !victory;
	//	}
	//
	//}
	//
	//system("pause");
}