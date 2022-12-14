#include "MyStr.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

MySTR::MySTR()
{
	pSSTR = nullptr;
}

MySTR::MySTR(string SSTR)
{
	this->SSTR = SSTR;
}

void MySTR::SetStrStringByObject(MySTR other)
{
	SSTR = other.SSTR;
}

void MySTR::SetStrStringByString(string SSTR)
{
	this->SSTR = SSTR;
}

void MySTR::WriteStringInFile()
{
	ofstream WRITE_IN_FILE;
	WRITE_IN_FILE.open("String.txt", ios::app);
	WRITE_IN_FILE << SSTR << "\n";
	WRITE_IN_FILE.close();
	cout << "A line " << '"' << SSTR << '"' << " has now been written to a file String.txt" << endl;

}



