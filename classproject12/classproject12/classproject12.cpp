// classproject12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	/*int n, factorial = 1,i;
	cout << "enter the number to know the factorial: \n";
	cin >> n;
	for (int i = 1 ; i <= n; i++)
	{
		factorial = factorial * i ;

	 }
	cout << "Factorial of the number is :  " << factorial << endl;
	return 0;*/


	// while loop

	/*int i=1, n, fact = 1;
	cout << "enter the number to know the factorial : \n";
	cin >> n;*/
	//while ( i <= n)
	//{
	//	fact = fact * i; // fact *=i;
	//	i++;
	//}

	// do while 

	/*do 
	{
		fact = fact * i;
		i++;
	} while (i <= n);

	cout << "The factorial of the given number : " << fact << endl;*/


	int i;
	float num ,sum=0;
	float  average;
	cout << "enter five  numbers : \n ";
	for ( i = 1; i <=5; i++)

	{
		cin >> num;
		sum = sum + num;
	}
	average = sum /5 ;

	cout << "the sum :  " << sum << endl;
	cout << "the average number is : " << average << endl;
	return 0;
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
