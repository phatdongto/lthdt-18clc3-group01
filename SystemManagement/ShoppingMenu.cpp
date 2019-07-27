#include "ShoppingMenu.h"
ShoppingMenu::ShoppingMenu(string name) : Stage(name) {

	string menu = "item 1,item 2,item 4,item 7,item 8,item 4.1,item 4',item 3,item 2.1,item 1.2,item 2',item 9";
	for (int i = 0; i < menu.size(); i++) {
		if (menu[i] == ',') {
			count++;
		}
	}

	int start = 0;
	for (int i = 0; i < menu.size(); i++) {
		if (menu[i] == ',' || i == menu.size() - 1) {
			if (i == menu.size() - 1) i++;
			list.push_back(menu.substr(start, i - start));
			start = i + 1;
		}
	}
	// Cai dat cho menu, class con, list bla bla

	//goi ham load item bla bla doc vao list
}
#
void ShoppingMenu::drawStage()
{
	// ve~ lisst item ra
	vector<string>::iterator p = list.begin();
	int i = 1;
	while (p != list.end()) {
		if (choice == i) Console::setTextColor(COLOR_YELLOW);  // set mau hay lam gi voi cai item duoc chon


		Console::printxy(*p, 50 + 20*((i-1)/4), (i-1)%4 + 5);			// code ve chinh

		Console::setTextColor(COLOR_WHITE);			// reset lai mau hay bla bla gi do
		p++;
		i++;
	}
}

int ShoppingMenu::input(int key)
{

	// xu ly key
	if (key == KEY_UP) {
		choice--;
		choice = choice == 0 ? count : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_DOWN) {
		choice++;
		choice = choice > count ? 1 : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_RIGHT) {
		choice += 4;
		choice = choice > count ? choice - count : choice;
		StageManager::drawStage();
	}
	else if (key == KEY_LEFT) {
		choice -= 4;
		choice = choice < 1 ? choice + count : choice;
		StageManager::drawStage();
	}

	return 0;
}
