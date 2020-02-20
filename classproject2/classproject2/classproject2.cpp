// classproject2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
int main() // it is a function
{
	string firstName, lastName;
	double  midterm, finalMarks, project , id;

	//cout << "enter your ID:\n";
	//getline(cin, id);
	cout << "enter your firstname:\n";
	getline(cin,firstName);

	cout << "enter your lastname\n";
	getline(cin,lastName);

	
	cout << "enter midterm marks:\n";
	cin >> midterm;

	
	cout << "enter final marks:\n";
	cin >> finalMarks;

	
	cout<<"enter project marks:\n";
	cin >> project;

	finalMarks = (midterm*0.3 + finalMarks*0.4 + project*0.3);
	cout <<firstName << "" << lastName << "has " << finalMarks;

	system("pause");

	cout << "please enter your name\n";
	cin >> firstName; // if we give name and space with other name then it will take only one name.
	getline(cin,firstName);// getline with take the complete line along with space.
	cout << "your firstName is :" << firstName;


    //std::cout << "Hello World!\n"; 
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
