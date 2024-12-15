#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CourseWork.h"
#include "First.h"
#include "Second.h"
using namespace std;
CartHold carts[10] = { 0,0,0,0 };
int count = 0;
eCMD Menu()
{
	for (int i = 0; ; i++)
	{
		system("cls");
		puts("Выберите функцию");
		puts("1 - Считать с файла");
		puts("2 - Посмотреть данные");
		puts("3 - Сохранение");
		puts("4 - Выход");
		int option;//char 
		scanf("%d", &option);
		switch (option)
		{
		case 1: return CMD_OPEN;
		case 2: return CMD_SHOW;
		case 3: return CMD_SAVE;
		case 4: return CMD_EXIT;
		default: puts("Неправильная команда"); return CMD_NONE;
		}
	}
}
int main()
{
	system("chcp 1251");
	eCMD command;
	do
	{
		command = Menu();
		switch (command)
		{
		case CMD_OPEN: OpenFile(); break;
		case CMD_SHOW: Show();  break;
		case CMD_SAVE: Save();  break;
		}
	} while (command != CMD_EXIT);	
	system("pause");
	return 0;
}