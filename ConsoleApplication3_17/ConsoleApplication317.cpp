// ConsoleApplication317.cpp: 定义控制台应用程序的入口点。
//3.17.cpp调用系统函数

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

const double pi = 3.14159265358979;

int main()
{
	double angle;
	cout << "Please enter an angle: ";
	cin >> angle;

	double r = angle*pi / 180;
	cout << "sin(" << angle << ")=" << sin(r) << endl;
	cout << "cos(" << angle << ")=" << cos(r) << endl;
	cout << "tan(" << angle << ")=" << tan(r) << endl;
	return 0;
}

