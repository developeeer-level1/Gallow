#include <iostream>
#include <vector>
#include <windows.h>

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
			cout << hangman[i] << endl;
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
		else if (gameFont->geter().size() < 30) {
			lenghtWordInCharacters += gameFont->geter()[int(hghg[i]) - 97][0].size();
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
			else if (gameFont->geter().size() < 30) {
				cout << "|";
				cout << gameFont->geter()[int(hghg[j]) - 97][i];
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

void Game(HANDLE hConsole, const CONSOLE_SCREEN_BUFFER_INFO& consoleInfo, int mode, Alphabeth_Font* gameFont) {
	int amountOfChances = 6;
	system("cls");

	gameFont->MainFont();
	Keyboard_Font* keyBoardFont = new BubbleFont();
	keyBoardFont->KeyboardFont();
	Hangman hangman;

	Mode obj(mode);
	string word = obj.Returner();
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
			if (char(tolower(keyBoardFont->geter()[chosingLetter][2][3])) == word[i] || char(toupper(keyBoardFont->geter()[chosingLetter][2][3])) == word[i]) {
				hghg[i] = word[i];
				missFactor = true;
			}
		}
		if (keyBoardFont->geter()[chosingLetter][2][3] == '/') {
			missFactor = true;
		}
		else {
			keyBoardFont->crossingLetters(chosingLetter);
		}
		if (missFactor == false) {
			amountOfChances--;
		}
		if (hghg == word) {
			Sleep(500);
			system("cls");
			cout << "You win!!!!!!";
			Sleep(1000);
			victory = !victory;
		}
		if (amountOfChances == 0) {
			Sleep(500);
			system("cls");
			cout << "You lose!!!!!!";
			Sleep(1000);
			victory = !victory;
		}

	}
}