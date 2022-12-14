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
	MySTR SECOND_OBJ("����� 2 ������");
	MySTR THIRD_OBJ("����� 3 ������");
	while (WORK) {

		system("CLS");


		cout << "1 ������: " << FIRST_OBJ.GetStrString() << endl;
		cout << "2 ������: " << SECOND_OBJ.GetStrString() << endl;
		cout << "3 ������: " << THIRD_OBJ.GetStrString() << "\n" << endl;

		text();
		cout << "������� �����: "; cin >> SELECT;


		switch (SELECT) {
		case 1:
			cout << "�������� ������ ������: "; cin >> SELECT_OBJ;
			cout << "�������� ������ ������ ��� ����������� � ������: "; cin >> SELECT_OBJ_2;
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
			cout << "�������� ������ ��� ����� ������: "; cin >> SELECT_OBJ;
			cout << "������� �����: ";
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
			cout << "�������� ������: "; cin >> SELECT_OBJ;
			cout << "\n�������� ������: ";
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
			cout << "�������� ������: "; cin >> SELECT_OBJ;
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
			cout << "�����" << endl;
			WORK = false;
			break;
		default:
			cout << "������ � ����� ������� ���" << endl;
			break;
		}


	}

	//_CrtDumpMemoryLeaks();
	return 0;
}


void text() {
	cout << "1 - ������� SetStrStringByObject \ 2 - ������� SetStrStringByString \n";
	cout << "3 - ������� GetStrString \ 4 - ������� WriteStringInFile \ 5 - �����" << endl;
}