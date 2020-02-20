//// binarysearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
//
//int main()
//{
//
//	int count, i, arr[30], num, first, last, middle;
//	cout << "how many elements would you like to enter?:";
//	cin >> count;
//
//	for (i = 0; i < count; i++)
//	{
//		cout << "Enter number " << (i + 1) << ": ";
//		cin >> arr[i];
//	}
//
//	cout << "Enter the number that you want to search:";
//	cin >> num;
//	first = 0;
//	last = count - 1;
//	middle = (first + last) / 2;
//
//	while (first <= last)
//		{
//			if (arr[middle] < num)
//			{
//				first = middle + 1;
//
//			}
//			else if (arr[middle] == num)
//			{
//				cout << num << " found in the array at the location " << middle + 1 << "\n";
//				break;
//			}
//			else {
//				last = middle - 1;
//			}
//			middle = (first + last) / 2;
//		}
//		if (first > last)
//		{
//			cout << num << " not found in the array";
//		}
//		return 0;
//
//		system("pause");
//		system("cls");
//
//	}

int binarysearch(int a[],int searchvalue,int size)
{
	int low = 0;
	int high = size - 1;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (a[mid] == searchvalue)
		{
			return mid;
		}
		else if (searchvalue > a[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int searchvalue;
	int a[] = { 12,22,35,47,55,67,82,98 };
	cout << "please enter a number to search";
	cin >> searchvalue;

	binarysearch(a, searchvalue, 8);
	int result = binarysearch(a, searchvalue, 8);
	{
		if (result == -1)
		{
			cout << "number not found" << endl;
		}
		else
		{
			cout << " number " << a[result] << " is found in index " << result << endl;
		}
	}
}

