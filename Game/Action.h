#pragma once
ref class Action
{
public:
	void help(int);
	void go(int);
	void look(int);
	void inventory();
	void dead_end();
	
	//��� ������ ������ ��������� �� ���� � ��� ������� int (��� ����� ���������� � ��������, ���������� 0 � ��������� ����� ���������� ��������� �� ���� ����� ������ � ���� �� ��(�������� ����� switch case))

	Action();
};

