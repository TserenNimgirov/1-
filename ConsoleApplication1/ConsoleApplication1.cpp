// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;
double a, b, c,d;
int main()
{
	printf("Enter lenght: ");
	std::cin >> a;
	std::cin.ignore(32767, '\n');
		b = a * 1.41;
		c = a * 5.62;
		cout << "Arshin:" << b << endl;
		cout << "Pyadi:" << c << endl;
		system("pause");
	
    return 0;
}

