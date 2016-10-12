// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	int x;
	double y;
	const double pi = 3.14159265;
	cout << "vvedi x>=5" << endl;
	cout << "x=";
	cin >> x;
	y = sqrt(pow(x, 3) - 7 * x*x + 14 * x - 8) / sqrt(x - 1) - cos(pi*sqrt(x - 5));
	cout << "y=" << y << endl;
	return 0;
}

