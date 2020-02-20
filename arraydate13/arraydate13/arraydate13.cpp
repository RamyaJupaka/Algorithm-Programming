// arraydate13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//int array[6];
	//int temp;
	//// for getting number
	//for (int i = 0; i < 6; i++)
	//{

	//	cout << " Please Enter Numbers";
	//	cin >> array[i];
	//}
	////for swapping
	//temp = array[0];
	//array[0] = array[5];
	//array[5] = temp;

	//// for getting output
	//for (int i = 0; i < 6; i++)
	//{
	//	cout << array[i] << endl;
	//}


	//______________________________________________
		//searching for element 

	

	//int number[10];
	//int goalnumber;
	//bool exist=false;

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "please enter the number";
	//	cin >> number[i];
	//}
	//cout << "give another number" << endl;
	//cin >> goalnumber;
	////searching
	//for (int i = 0; i < 10; i++)
	//{
	//	if (number[i] == goalnumber)
	//	{

	//		cout << "yes found" << endl;
	//		exist = true;
	//		break;
	//	}
	//}
	//	if(exist==false)
	//	{
	//		cout << "element not found" << endl;

	//	}

	//_________________________________________________________________

	char name[20] ;
	float marks , average;
	int roll ,i;
	int sum = 0;



	cout << "----List of Students---\n" ;

	for (int i = 0; i <= 2; i++)
	{
		cout << "Enter the name of the student" << endl;
		cin >> name;

		cout << "Enter the marks" << endl;
		cin >> marks;
		cout << "Enter the roll number" << endl;
		cin >> roll;

		sum = sum + marks;
	}
	average = sum/20;
	for (int i = 0; i <= 20; i++)
	{
		cout << "----------------list------------------" << endl;
		cout << "Name :  " << name << endl;
		cout << "roll :  " << roll << endl;
		cout << "marks  :   " << marks << endl;
		cout << "Average is  :  " << average << endl;
		cout << "----------------------------------" << endl;
	}



	
	system("pause");
	system("cls");
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
