#pragma once
#include <iostream>
#include <string>
using namespace std;

class Error
{
public:
	string msg;
	string print()
	{
		cout << msg << endl;
		return msg;
	}
};

class Elenghth : public Error
{
public:
	Elenghth() { msg = "Error, massiv length > X !!!"; } //выход за границы массива
};

class Nvar : public Error
{
public:
	Nvar() { msg = "Error, type mismatch variables !!!"; } // несоответствие типов данных
};

class Dnull : public Error //деление на ноль
{
public:
	Dnull() { msg = "Error, delenie na null"; }
};

class Nullpointer : public Error //нулевой указатель (нулевой указатель ни на что не ссылается)
{
public:
	Nullpointer() { msg = "Error, nullpointer"; }
};
