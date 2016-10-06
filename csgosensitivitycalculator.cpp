// csgosensitivitycalculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <Windows.h>

double changeDPI(double sens, double dpi, double newDpi) {
	double c = sens * dpi;
	c = c / newDpi;
	return c;
}

double getRealSensitivity(double sens, double dpi) {
	return sens * dpi;
}

int prettyPrint(char* x) {
	for (int i = 0; i < strlen(x); i++) {
		std::cout << x[i];
		Sleep(10);
	}
	return 0;
}


int main()
{
	prettyPrint("CSGO new dpi sensitivity calculator \n\n");
	prettyPrint("\nenter current DPI: ");
	double dpi = 0;
	std::cin >> dpi;
	prettyPrint("\nenter current sensitivity: ");
	double sens = 0;
	std::cin >> sens;
	prettyPrint("\nenter new DPI: ");
	double newDpi = 0;
	std::cin >> newDpi;
	
	prettyPrint("\nnew ingame sensitivty: ");
	std::cout << changeDPI(dpi, sens, newDpi);
	prettyPrint("\ntype 'sensitivity ");

	std::cout << changeDPI(dpi, sens, newDpi);
	prettyPrint("' into your console\n\n");

	prettyPrint("real sensitivity : ");
	std::cout << getRealSensitivity(sens, dpi);
	prettyPrint(" (used for comparison with other people)\n");
	system("pause");



    return 0;
}

