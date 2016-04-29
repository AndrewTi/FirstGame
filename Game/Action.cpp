#include "stdafx.h"
#include "Action.h"
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

Action::Action()
{

}

void Action::help(int location)
{
	fprintf(stdout, "help =>\n");
	fprintf(stdout, "---------------------------------\n");
	fprintf(stdout, "look - для осмотра местности\n");
	fprintf(stdout, "inventory - для открытия инвенторя\n");
	fprintf(stdout, "walk - для выбора движения и движения\n");
	switch (location)
	{
	case 1: {break;}
	}
	fprintf(stdout, "---------------------------------\n");
}

void Action::go(int location)
{
	fprintf(stdout, "walk =>\n");
	fprintf(stdout, "---------------------------------\n");
	fprintf(stdout, "Куда бы вы хотели пойти?\n");
	switch (location)
	{
	case 1: {fprintf(stdout, "1. Трова налево\n"); fprintf(stdout, "2. Тропа направо\n"); break;}
	}
	fprintf(stdout, "---------------------------------\n");
}

void Action::look(int location)
{
	
}

void Action::inventory()
{

}

void Action::dead_end()
{
	fprintf(stdout, "$$$$$__$$$$$___$$$$__$$$$$   $$$$$__$$__$$_$$$$$____$$$\n");
	fprintf(stdout, "$$__$$_$$_____$$__$$_$$__$$  $$_____$$$_$$_$$__$$___$$$\n");
	fprintf(stdout, "$$__$$_$$$$___$$$$$$_$$__$$  $$$$___$$_$$$_$$__$$___$$$\n");
	fprintf(stdout, "$$__$$_$$_____$$__$$_$$__$$  $$_____$$__$$_$$__$$      \n");
	fprintf(stdout, "$$$$$__$$$$$__$$__$$_$$$$$   $$$$$__$$__$$_$$$$$____$$$\n");
	fprintf(stdout, "\n");
	fprintf(stdout, "_______________eeeeeeeqqqqqqqqqqqqeeee\n");
	fprintf(stdout, "__________eeeqqqqqqqqqqqqqqqqqqqqqqqqqqeee\n");
	fprintf(stdout, "_______eeqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqeee\n");
	fprintf(stdout, "______eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqee\n");
	fprintf(stdout, "____eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "___eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "__eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq\n");
	fprintf(stdout, "__qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "_eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "_qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqeqqqe\n");
	fprintf(stdout, "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe_eqqq\n");
	fprintf(stdout, "eqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe__qqqqee\n");
	fprintf(stdout, "_qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq_@_eqqqqqq\n");
	fprintf(stdout, "__qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqe___eqqqqqe\n");
	fprintf(stdout, "___qqqqqqqqqqqqqqqqqqqqqqqqqeeeqqqqqqqqqqqqqeeeqqqqee\n");
	fprintf(stdout, "____eqqqqqqqqqqqqqqqqqqqqqqeeqeeeeeeeeeeqqqqqqqqqqq\n");
	fprintf(stdout, "______eeqqqqqqqqqqqqqqqqqqqe_qqqeeeeeqq_qqqqqqqqqqqe\n");
	fprintf(stdout, "_________eeqqqqqqqqqqqqqqqe___qqqqqqqqq_qqqqqqqqqqqqe\n");
	fprintf(stdout, "___________eeeeeeeeqeqeqqe____eqqqqqqq_qqqqqqqqqqqqqq\n");
	fprintf(stdout, "_______________________e_______qqqqqqq_qqqqqqqqqqqqqq\n");
	fprintf(stdout, "_______________________________eqqqqqq______eeqqqqqq\n");
	fprintf(stdout, "________________________________qqqqqqqqqqq\n");
	fprintf(stdout, "________________________________qqqqqqqqqqqqqqqqqee\n");
	fprintf(stdout, "_________________________________eeqqqqqqqqqqqqqqqqe\n");
	fprintf(stdout, "____________________________________eeeeeqqqqqqqqqqe\n");
	fprintf(stdout, "___________________________________________eeeeeeee\n");
	system("pause");
	exit(0);
}