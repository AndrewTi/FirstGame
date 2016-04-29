#pragma once
ref class Action
{
public:
	void help(int);
	void go(int);
	void look(int);
	void inventory();
	void dead_end();
	
	//тут объ€ви методы инвентар€ во вход к ним поставь int (это будет переменна€ с рюкзаком, изначально 0 в инвентаре будет количество завис€щее от того какой рюкзак и есть ли он(возможно через switch case))

	Action();
};

