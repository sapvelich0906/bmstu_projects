// Точка наименее удаленная от данной.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
	int x, y, z, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, x5, y5, z5 , nmin;
	double min;
	cout << "vvedi koordinaty ishodnoy tochki" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	cout << "vvedi koordinaty pervoy tochki" << endl;
	cin >> x1;
	cin >> y1;
	cin >> z1;
	cout << "vvedi koordinaty vtoroy tochki" << endl;
	cin >> x2;
	cin >> y2;
	cin >> z2;
	cout << "vvedi koordinaty tretiey tochki" << endl;
	cin >> x3;
	cin >> y3;
	cin >> z3;
	cout << "vvedi koordinaty chetvertoy tochki" << endl;
	cin >> x4;
	cin >> y4;
	cin >> z4;
	cout << "vvedi koordinaty pyatoy tochki" << endl;
	cin >> x5;
	cin >> y5;
	cin >> z5;
	min = sqrt((x1 - x)*(x1 - x) + (y1 - y)*(y1 - y) + (z1 - z)*(z1 - z));
	nmin = 1;
	if (sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y) + (z2 - z)*(z2 - z)) < min)
	{
		min = sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y) + (z2 - z)*(z2 - z));
		nmin = 2;
	}
	if (sqrt((x3 - x)*(x3 - x) + (y3 - y)*(y3 - y) + (z3 - z)*(z3 - z)) < min)
	{
		min = sqrt((x3 - x)*(x3 - x) + (y3 - y)*(y3 - y) + (z3 - z)*(z3 - z));
		nmin = 3;
	}
	if (sqrt((x4 - x)*(x4 - x) + (y4 - y)*(y4 - y) + (z4 - z)*(z4 - z)) < min)
	{
		min = sqrt((x4 - x)*(x4 - x) + (y4 - y)*(y4 - y) + (z4 - z)*(z4 - z));
		nmin = 4;
	}
	if (sqrt((x5 - x)*(x5 - x) + (y5 - y)*(y5 - y) + (z5 - z)*(z5 - z)) < min)
	{
		min = sqrt((x5 - x)*(x5 - x) + (y5 - y)*(y5 - y) + (z5 - z)*(z5 - z));
		nmin = 5;
	}
	switch (nmin)
	{
	case 1 : cout << "Pervaya tochka bligayshaya"; break;
	case 2 : cout << "Vtoraya tochka bligayshaya"; break;
	case 3 : cout << "Tretia tochka bligayshaya"; break;
	case 4: cout << "Chetvertaya tochka bligayshaya"; break;
	case 5: cout << "Pyataya tochka bligayshaya"; break;
	}
    return 0;
}

