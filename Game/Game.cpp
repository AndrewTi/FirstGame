// Game.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Action.h"

using namespace std;

int main()
{
	//system("mode 65");
	Action act;
	string command;
	int location;
	//-- pre start ---
	setlocale(LC_ALL, "Russian");
	cout << "     _______________   _____        __________ \n"
		<< "     |_____    _____|  |    |       |   ______|\n"
		<< "           |   |       |    |_____  |   |_____ \n"
		<< "           |   |       |     ___  | |    _____|\n"
		<< "           |   |       |    |   | | |   |_____ \n"
		<< "           |___|       |____|   |_| |_________|\n";
	_sleep(3000);
	cout << "\n\n\n\nГотовы начать игру?(enter)\n";
	getchar();
	system("cls");
	// --- start game ---
	location = 1;
	_sleep(1000);
	cout << "Вы очнулись в глубоком дремучем лесу...\n";
	_sleep(1000);
	cout << "Ваши действия?\n";


	for (;;)
	{
		cin >> command;
		system("cls");
		if (command == "help") { act.help(location); }
		if (command == "look") { act.look(location); }
		if (command == "walk") { act.go(location); }
		//добавь сюда инвентарь и его метод просмотра (не забудь добавить в help)
		// можешь срзу тут выставить в алфавитном или по логике порядке
		if (command == "exit") { exit(0); }
		if (command == "-de") { act.dead_end(); }
	}

}
