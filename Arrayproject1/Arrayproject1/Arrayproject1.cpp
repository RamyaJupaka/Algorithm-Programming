// Arrayproject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*float marks[7] = {100 , 95 , 85,72 , 90 , 82 , 99}; 
	cout << "enter the array integers :  \n";
	for (int i = 0; i <= marks[i]; i++)
	{
		cout << marks[i] << endl;
	 }

	cout << "first elements is : " << marks[0] << endl;
	cout << "second elements is : " << marks[1] << endl;
	cout << "third elements is : " << marks[2] << endl;
	cout << "fourth elements is : " << marks[3] << endl;
	cout << "fifth elements is : " << marks[4] << endl;
	cout << "sixth elements is : " << marks[5] << endl;
	cout << "seventh elements is : " << marks[6] << endl;
*/

	int ar1[6];
	for (int i = 0; i < 6; i++)
	{
		cout << "enter number" << i + 1 << ":" << endl;
		cin >> ar1[i];
	}
	for (int i = 0; i < 6; i++)
	{
		cout << ar1[i];
	}

	
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
