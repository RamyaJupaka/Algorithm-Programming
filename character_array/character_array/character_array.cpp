// character_array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	char ch1[] = { 'a','b','c','d','\0' };
	cout << ch1 << endl;
	char ch2[] = { 'a','b','\0','c','d' };
	cout << ch2 << endl;
	char ch3[] = "this is a c++ course";
	cout << ch3 << endl;
	cout << strlen(ch3) <<endl;

	// saving name inside array of character
	cout << "+++++++++++++++ array of character +++++++++" <<endl;

	char name[50];
	char sport[50];
	cout << "enter name " <<endl;
	cin.getline(name, 50);
	cout << "enter sport "<<endl;
	cin.getline(sport, 50);
	cout << name <<" "<< "loves" <<" "<< sport <<endl;

	// string swapping
	cout << " ************* sawpping ***********" <<endl;
	string hamburger = "hamburger";
	string sandwich = "sandwich";
	hamburger.swap(sandwich);
	cout << hamburger <<endl;
	cout << sandwich <<endl;
	
	int b = hamburger.find('a');
		cout << "location of a inside string is : " << b << endl;
		int c = sandwich.find('o');
		cout << "location of o string is : " << c << endl;

		string tolower(    );
		cout << hamburger << endl;
		string toupper(    );
		cout << sandwich << endl;


	system ("pause");
	system ("cls");
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
