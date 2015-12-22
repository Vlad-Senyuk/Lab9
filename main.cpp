#include <iostream>
#include "Template.h"
#include "ptype.h"
#include "Error.h"
#include <string>
using namespace std;

void main()
{
	cout << "Begin:" << endl;
	try
	{
		int num;
		cout << "Input number: " << endl;
		cin >> num;
		if (num > 1) throw Elenghth();
		transp_sred m(2745, "BMW", 10000);
		set<transp_sred> obj(num, &m);
		obj.show();
	}

	//catch (Error &a)
	//{
	//	a.print();
	//}

	//try
	//{
	//	int num;
	//	cout << "Input number: " << endl;
	//	cin >> num;
	//	if (num = 1.4) throw Nvar();
	//	transp_sred m(2745, "BMW", 10000);
	//	set<transp_sred> obj(num, &m);
	//	obj.show();
	//}


	catch (Error &a)
	{
		a.print();
	}

	try
	{
		int dl;
		cout << "Input number for delen: " << endl;
		cin >> dl;
		if (dl == 0) throw Dnull();
		int *mas = new int[5];
		for (int i = 0; i < 5; i++)
		{
			cin >> mas[i];
		}

		set<int> s(5, mas);
		s.show();
		del<int>(s, dl);
	}

	catch (Error &a)
	{
		a.print();
	}

	try
	{
		int *mas = NULL;
		if (mas == NULL) throw Nullpointer();
	}

	catch (Error &a)
	{
		a.print();
	}

	cout << "End." << endl;
}
