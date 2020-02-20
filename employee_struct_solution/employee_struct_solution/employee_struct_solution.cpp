// Employee Database.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

struct employee
{
	char name[100];
	int id;
	char country[100];
} emp[100];
//Global initializations so that everything works with all the functions
char answer;
int n, eno, selection;
//employee emp[100];
void addemployee();
void appmenu();
void searchemployee();
void sortemployee();
void printemployee();
void displayHeader(string header);
void displayMenu();


int main()
{
	int choice;
	do
	{
		displayMenu();
		cout << endl << endl << endl << "  Enter Your Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:	//
			system("cls");
			displayHeader("Add Employee to the list");
			addemployee();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 2:	//search employee by  id
			system("cls");
			displayHeader("Search employee by Id");
			searchemployee();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 3://Sort the list
			system("cls");
			displayHeader("Sort the employee list");
			sortemployee();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 4: //Display the list 
			system("cls");
			displayHeader("List of Employees");
			printemployee();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 5:	//exit
			break;
		default:	//Entering the invalid
			system("cls");
			cout << "\n\n\n\n\n\n\n\n" << setw(57);
			cout << " ERROR: Your choice is invalid ";
			break;
		}

	} while (choice != 5);

	system("cls");
	displayHeader("Quit the Application");
	cout << "\n\nThanks for using the app\n\n";
	//appmenu();
}

//Main menu function
void appmenu()
{
	cout << "Employee App" << endl;
	cout << "--------------------------" << endl;
	cout << "1. Add Employee" << endl;
	cout << "2. Search Employee by ID" << endl;
	cout << "3. Sort Employee by ID" << endl;
	cout << "4. Print Employee" << endl;
	cout << "5. Exit" << endl;
selection:
	cout << "Please Enter a number from 1 - 5: ";
	cin >> selection;
	switch (selection)
	{
	case 1:
		//addemployee();
		system("cls");
		cout << "How many employees would you like to enter?: ";
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << "Enter the following information on your new employee: \n";
			cout << "ID: ";
			cin >> emp[i].id;
			cin.ignore();
			cout << "Name: ";
			cin.getline(emp[i].name, 100);
			cout << "Country: ";
			cin.getline(emp[i].country, 100);
		}
		system("cls");
		appmenu();
		break;
	case 2:
		searchemployee();
		cout << "\n\nPress any key to back to the menu...";
		cin.ignore();
		getchar();
		break;
	case 3:
		sortemployee();
		break;
	case 4:
		printemployee();
		break;
	case 5:
		system("pause");
		system("cls");
	default:
		goto selection;
	}
}
//Add employee function
void addemployee()
{
	system("cls");
	cout << "How many employees would you like to enter?: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the following information on your new employee: \n";
		cout << "ID: ";
		cin >> emp[i].id;
		cin.ignore();
		cout << "Name: ";
		cin.getline(emp[i].name, 100);
		cout << "Country: ";
		cin.getline(emp[i].country, 100);
	}
	//system("cls");
	//appmenu();
}
//Employee search function
void searchemployee()
{

	bool flag = false;
	system("cls");
	cout << "Enter Employee ID to search: ";
	cin >> eno;
	do
	{
		for (int i = 0; i < n; i++)
		{
			if (emp[i].id == eno)
			{
				flag = true;
				cout << "ID: " << emp[i].id << endl;
				cout << "Name: " << emp[i].name << endl;
				cout << "Country: " << emp[i].country << endl;
			}
		}
		if (flag == false)
		{
			cout << "Employee not found" << endl;
		}
		cout << "Do you want to search again? (y/n)" << endl;
		cin >> answer;

		system("cls");
	} 
	while (answer == 'y' || answer == 'Y');
	

}
void sortemployee() {
	employee temp;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (emp[i].id > emp[i + 1].id) {
				//swap
				temp = emp[i];
				emp[i] = emp[i + 1];
				emp[i + 1] = temp;
			}
		}
	}
	cout << "\n\n\t The list is successfully sorted!";
}
void printemployee() {

	if (n != 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Id:" << emp[i].id << endl;
			cout << "Name:" << emp[i].name << endl;
			cout << "Country:" << emp[i].country << endl;
			cout << "-----------------------------\n";

		}
	}
	else
	{
		cout << "\n\n\t" << "THE LIST IS EMPTY \n\n";
	}

}
void displayMenu() {
	system("cls");
	displayHeader("Employee application");
	cout << endl << endl << " 1.  add a  new employee";
	cout << endl << endl << " 2.  Search an employee by Id";
	cout << endl << endl << " 3.  Sort the employee byId";
	cout << endl << endl << " 4.  print employee";
	cout << endl << endl << " 5.  Quit";
}

void displayHeader(string header) {
	//uppercase the header

	for (int i = 0; i < header.length(); i++)
	{
		header[i] = toupper(header[i]);
	}
	//display the header
	cout << "\n\t" << header;
	cout << "\n -----------------------" << endl;

}
