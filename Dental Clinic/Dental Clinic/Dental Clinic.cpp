// Dental Clinic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cleaning = 60, cavityfilling = 200, xray = 100, subtotal;

	const int tax = 15;
	float total;
	string name;
	char ch;

	cout << "   dental clinic  \n";
	cout << " ---------------------------- \n";
	cout << "Enter the patient name : \n";
	cin >> name;


	cout << " was the cleaning performed:  " << endl;
	cin >> ch;
	switch (ch)
	{
	case 'Y':cout << "cleaning rate = $60\n";
		cleaning = 60;
		break;
	case 'y':cout << "cleaning rate = $60\n";
		cleaning = 60;

		break;
	case 'N':cout << " " << endl;
		cleaning = 0;

		break;
	case 'n':cout << " " << endl;
		cleaning = 0;

		break;

	}

	cout << " was cavity filling performed " << endl;
	cin >> ch;
	switch (ch)
	{
	case 'Y':cout << "cavity filling  = $200\n";
		cavityfilling = 200;
		break;
	case 'y':cout << "cavity filling  = $200\n";
		cavityfilling = 200;

		break;
	case 'N':cout << "  " << endl;
		cavityfilling = 0;

		break;
	case 'n':cout << " " << endl;
		cavityfilling = 0;

		break;

	}

	cout << " was x-ray performed " << endl;
	cin >> ch;
	switch (ch)
	{
	case 'Y':cout << "xray rate = $100\n";
		xray = 100;
		break;
	case 'y':cout << "xray rate = $100\n";
		xray = 100;

		break;

	case 'N':cout << "not performed " << endl;
		xray = 0;

		break;
	case 'n':cout << "not performed " << endl;
		xray = 0;


	}

	cout << "-------------------------------\n   ";
	cout << "receipt displayed below\n";
	cout << "-------------------------------\n   ";
	cout << " receipt for :" << name << endl;
	cout << "-------------------------------\n  ";



	subtotal = cleaning + cavityfilling + xray;

	cout << "The subtotal is :  " << subtotal << endl;

	//tax = 15;
	total = (subtotal / tax * 100);

	cout << "The tax amount is :  " << tax << endl;

	cout << "The total :   " << total << endl;


	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
