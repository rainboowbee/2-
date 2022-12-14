#pragma once
#ifndef MYSTR_H
#define MYSTR_H

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class MySTR {

	string SSTR;
	string* pSSTR = &SSTR;

public:

	////////Конструкторы////////
	MySTR();
	MySTR(string SSTR);
	///////////Методы///////////

	void SetStrStringByObject(MySTR other);
	void SetStrStringByString(string SSTR);
	void WriteStringInFile();
	string GetStrString() { return SSTR; }


};
#endif // !MYSTR_H

