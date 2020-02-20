// digitstring.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//int main()
//{
	//	char ch;
	//
	//	/* Input character from user */
	//	cout<<"Enter any character: ";
	//	cin >>ch;
	//
	//
	//	/* Alphabet check */
	//	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	//	{
		//cout << " is alphabet." << ch << endl;
		//	}
	//	else if (ch >= '0' && ch <= '9')
	//	{
	//		cout<<" number is digit. " <<ch;
	//	}
	//	else
	//	{
	//		cout<<" it is special character. " <<ch;
	//	}
	//
	//	return 0;
//}
bool checkdigit(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}
	int main()
	{
		char ch[4] = { '1','a','2','c' };
		bool result;

		for (int i = 0; i < 4; i++)
		{
			//bool result = checkdigit(ch[i]);  or 
			//bool result = isdigit(ch[i]);   or
			 result = isalpha(ch[i]);


			if (result == true)			

			{
				cout << ch[i] << "Isapha" << endl;
			}
			else
			{
				cout << "ch[i]" << "Is not alpha" << endl;
			}
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
