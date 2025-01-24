#include <conio.h>

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