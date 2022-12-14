#include <iostream>
#include <string>
#include <fstream>
#include "MyStr.h"
using namespace std;
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW


void text();

int main() {

	bool WORK = true;
	int SELECT, SELECT_OBJ, SELECT_OBJ_2;
	string SELECT_TEXT;
	setlocale(LC_ALL, "Russian");


	MySTR FIRST_OBJ;
	MySTR SECOND_OBJ("Текст 2 строки");
	MySTR THIRD_OBJ("Текст 3 строки");
	while (WORK) {

		system("CLS");


		cout << "1 строка: " << FIRST_OBJ.GetStrString() << endl;
		cout << "2 строка: " << SECOND_OBJ.GetStrString() << endl;
		cout << "3 строка: " << THIRD_OBJ.GetStrString() << "\n" << endl;

		text();
		cout << "Введите число: "; cin >> SELECT;


		switch (SELECT) {
		case 1:
			cout << "Выберете первую строку: "; cin >> SELECT_OBJ;
			cout << "Выберете вторую строку для копирования к первой: "; cin >> SELECT_OBJ_2;
			switch (SELECT_OBJ) {
			case 1:
				switch (SELECT_OBJ_2) {
				case 1: FIRST_OBJ.SetStrStringByObject(FIRST_OBJ);
					break;
				case 2: FIRST_OBJ.SetStrStringByObject(SECOND_OBJ);
					break;
				case 3: FIRST_OBJ.SetStrStringByObject(THIRD_OBJ);
					break;
				}
				break;
			case 2:
				switch (SELECT_OBJ_2) {
				case 1: SECOND_OBJ.SetStrStringByObject(FIRST_OBJ);
					break;
				case 2: SECOND_OBJ.SetStrStringByObject(SECOND_OBJ);
					break;
				case 3: SECOND_OBJ.SetStrStringByObject(THIRD_OBJ);
					break;
				}
				break;
			case 3:
				switch (SELECT_OBJ_2) {
				case 1: THIRD_OBJ.SetStrStringByObject(FIRST_OBJ);
					break;
				case 2: THIRD_OBJ.SetStrStringByObject(SECOND_OBJ);
					break;
				case 3: THIRD_OBJ.SetStrStringByObject(THIRD_OBJ);
					break;
				}
				break;
			}
			break;

		case 2:
			cout << "Выберете строку для ввода текста: "; cin >> SELECT_OBJ;
			cout << "Введите текст: ";
			cin.ignore();
			getline(cin, SELECT_TEXT);
			switch (SELECT_OBJ)
			{
			case 1:
				FIRST_OBJ.SetStrStringByString(SELECT_TEXT);
				break;
			case 2:
				SECOND_OBJ.SetStrStringByString(SELECT_TEXT);
				break;
			case 3:
				THIRD_OBJ.SetStrStringByString(SELECT_TEXT);
				break;
			}
			break;
		case 3:
			cout << "Выберете строку: "; cin >> SELECT_OBJ;
			cout << "\nЗначение строки: ";
			switch (SELECT_OBJ)
			{
			case 1:
				cout << FIRST_OBJ.GetStrString();
				break;
			case 2:
				cout << SECOND_OBJ.GetStrString();
				break;
			case 3:
				cout << THIRD_OBJ.GetStrString();
				break;
			}
			cout << endl;
			system("pause");
			break;
		case 4:
			cout << "Выберете строку: "; cin >> SELECT_OBJ;
			switch (SELECT_OBJ)
			{
			case 1:
				FIRST_OBJ.WriteStringInFile();
				break;
			case 2:
				SECOND_OBJ.WriteStringInFile();
				break;
			case 3:
				THIRD_OBJ.WriteStringInFile();
				break;
			}
			system("pause");
			break;
		case 5:
			cout << "Выход" << endl;
			WORK = false;
			break;
		default:
			cout << "Строки с таким номером нет" << endl;
			break;
		}


	}

	//_CrtDumpMemoryLeaks();
	return 0;
}


void text() {
	cout << "1 - Вызвать SetStrStringByObject \ 2 - Вызвать SetStrStringByString \n";
	cout << "3 - Вызвать GetStrString \ 4 - Вызвать WriteStringInFile \ 5 - Выход" << endl;
}