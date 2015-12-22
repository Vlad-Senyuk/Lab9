#pragma once
#include <iostream>
#include <string>
using namespace std;

class transp_sred
{
	int number;
	string name;
	int autopr;
public:
	transp_sred()
	{
		number = 0;
		name = "";
		autopr = 0;
	}

	transp_sred(int x, string y, int z)
	{
		number = x;
		name = y;
		autopr = z;
	}

	void show()
	{
		cout << "Number auto: " << number << endl;
		cout << "Name auto: " << name << endl;
		cout << "Autoptobeg: " << autopr << endl;
	}

	transp_sred operator=(transp_sred & a)
	{
		number = a.number;
		name = a.name;
		autopr = a.autopr;
		return *this;
	}

	friend ostream & operator<<(ostream & os, transp_sred & a)
	{
		a.show();
		return os;
	}
};
