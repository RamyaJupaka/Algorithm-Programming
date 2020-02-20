// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	int sum;
    //std::cout << "Hello World!\n"; 
	cout << "Enter first number\n";
	cin >> num1;
	cout << "Enter second number\n";
	cin >> num2;
	cout << "******************************\n";
	cout << "Addition of two numbers :";
	sum = num1 + num2;
	cout << sum << endl;
	cout << "*******************************\n";
	sum = num1 * num2;
	cout << "Multiplication of two numbers:";
	cout << sum << endl;
	cout << "********************************\n";
	sum = num1 - num2;
	cout << "substraction of two numbers:";
	cout << sum << endl;
	cout << "********************************\n";
	sum = num1 / num2;
	cout << "division of two numbers:";
	cout << sum << endl;
	cout << "********************************\n";





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
