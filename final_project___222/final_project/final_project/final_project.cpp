// PROJECTFINAL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

struct inventory
{
	int ID, price;
	char name[150], power[100];
} invent[100];
//struct sortedInventory
//{
//	int ID, price;
//	char name[150], power[100];
//} sorted[100];
struct playerBackpack
{
	int ID, price;
	string name, power;
}backpack[100];
int selection, selection1, selection2, selection3, selection4;
string username;
string password;
char answer;

int n, eno, num, i, itemID, cnt = -1;
char ilist[100];


void menu();
void displaymenu();
void admin();
//player
void player();
void buyitems();
void backpackitems();
void firstexit();
void login();
void adminmenu();
void addpoint();
void displaypoints();
void addlist();
void listitems();
void searchitems();
void exitmain();
void priceSort(inventory inv[], int size);


void displayHeader(string header);

// Mian display menu
int main()
{
	int choice1;
	do
	{
		displaymenu();
		cout << endl << endl << endl << "  Enter Your Choice: ";
		cin >> choice1;
		switch (choice1)
		{
		case 1:
			system("cls");
			login();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 2:
			system("cls");
			player();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 3:
			system("cls");
			firstexit();
			cout << "\n\nyou want to exit  ??...";

			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		default:
			break;

		}


	} while (choice1 != 3);


	// Options to select in the AdminMenu for perform other Operations
	//----------------------------------------------------------------
	int choice;
	do
	{
		displaymenu();
		cout << endl << endl << endl << "  Enter Your Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			login();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 2:
			system("cls");
			adminmenu();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 3:
			system("cls");
			addpoint();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 4:
			system("cls");
			addlist();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 5:
			system("cls");
			listitems();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 6:
			system("cls");
			searchitems();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		case 7:
			system("cls");
			exitmain();
			cout << "\n\nPress any key to back to the menu...";
			cin.ignore();
			getchar();
			break;
		default:
			system("cls");
			cout << "\n\n\n\n\n\n\n\n";
			cout << " ERROR: Your choice is invalid ";
			break;
		}
	} while (choice != 7);
	system("cls");
	displayHeader("Quit the Application");
	cout << "\n\nThanks for using the app\n\n";
	adminmenu();


}

//_____________________________main menu function__________

void menu()
{
selection1:
	cout << "Please Select any Number from 1 - 3: ";
	cin >> selection1;
	switch (selection1)
	{
	case 1:
		admin();
		system("cls");
		break;
	case 2:
		player();
		system("cls");
		break;
	case 3:
		firstexit();
		system("cls");
		break;
	default:
		break;


	}

selection:
	cout << "Please Select a number from 1 - 5: ";
	cin >> selection;
	switch (selection)
	{
	case 1:
		login();
		system("cls");
		break;
	case 2:
		adminmenu();
		system("cls");
		break;
	case 3:
		addpoint();
		system("cls");
		break;
	case 4:
		addlist();
		system("cls");
		break;
	case 5:
		listitems();
		system("cls");
		break;
	case 6:
		searchitems();
		system("cls");
		break;
	case 7:
		exitmain();
		system("cls");
		break;
	default:
		break;

	}
}
//_____________________________display function___________

void displaymenu()
{
	system("cls");
	cout << "                       Inventory Menu" << endl;
	cout << "                   --------------------------" << endl;
	cout << endl << endl << " 1. Admin";
	cout << endl << endl << " 2. Player";
	cout << endl << endl << " 3. Exit";
}

void admin()
{
}

// PlayerMenu  Displays the Options like 1. Buy Item , 2. Display Backpack , 3.Exit
//----------------------------------------------------------------------------------
void player()
{

	system("cls");
	cout << " *************************************************************************************" << endl;

	cout << "                                                Current Player Points  :      " << n << endl;
	cout << " *************************************************************************************" << endl;
	cout << "1. Buy Items from Inventory" << endl;
	cout << "2. Display Backpack list" << endl;
	cout << "3. Exit Player" << endl;


selection2:
	cout << "Please Enter any Number from 1 - 2: ";
	cin >> selection2;
	switch (selection2)
	{
	case 1:

		//system("cls");	
		buyitems();
		//system("cls");
		break;
	case 2:
		backpackitems();
		//	system("cls");

		break;
	case 3:
		exitmain();
		break;

	default:
		break;
		menu();
	}

}

// function  buyitem - it will sort the item according to the price and ask user to enter ID to add item (message : item added) , 
//it will search for the item and display message corresponding to the list weather item already present/ no enough points to buy/no item .
//-------------------------------------------------------------------------------------------------------------------------------
void buyitems()
{
	priceSort(invent, num);
	//sortedListitems();
	bool itemfound = false;
	bool itemAlreadyPresent = false;
	cnt = cnt + 1;
	cout << "Enter the ID to Add the Item in Backpack: ";
	cin >> itemID;
	for (int i = 0; i < num; i++)
	{
		if (invent[i].ID == itemID)
		{
			itemfound = true;

			for (int j = 0; j < cnt + 1; j++)
			{
				if (backpack[j].ID == itemID)
				{
					itemAlreadyPresent = true;
					cout << "Item is already  Present in the Backpack";
					break;
				}
			}
			if (itemAlreadyPresent == false) {
				if (invent[i].price <= n) {

					backpack[cnt].ID = invent[i].ID;
					backpack[cnt].name = invent[i].name;
					backpack[cnt].power = invent[i].power;
					backpack[cnt].price = invent[i].price;
					n = n - invent[i].price;
					break;
				}
				else {
					cnt = cnt - 1;
					itemAlreadyPresent = true;
					cout << "NO Enough Points to Buy an Item " << endl;
				}
			}

		}
	}
	if (itemfound == false)
	{
		cout << "NO Items in backpack " << endl;
	}
	else {
		if (itemAlreadyPresent == false) {
			cout << "Item added to Backpack: ";
		}
	}
}

// backpack function  displays the available list in backpack / empty ,,
void backpackitems()
{
	if (cnt >= 0)
		cout << "The available list" << endl;
	else
		cout << "Backpack is Empty";

	cout << "  Item ID      Name       Power        Price     " << endl;
	cout << "---------------------------------------------------------" << endl;
	for (int i = 0; i < cnt + 1; i++)
	{
		/*cout << "ID: " << backpack[i].ID << endl;
		cout << "Name: " << backpack[i].name << endl;
		cout << "Power: " << backpack[i].power << endl;
		cout << "Price: " << backpack[i].price << endl;
		cout << "-----------------------------\n";*/
		cout << "      " << backpack[i].ID << "        " << backpack[i].name << "       " << backpack[i].power << "       " << backpack[i].price << endl;
	}


}

// priceSort function : it will swap the given price and display the list according to amount
void priceSort(inventory inv[], int size)
{
	bool swapped;
	do {
		swapped = false;
		for (int i = 0; i < (size - 1); i++) {
			if (inv[i].price > inv[i + 1].price) {
				swap(inv[i], inv[i + 1]);
				swapped = true;
			}
		}

	} while (swapped);
	cout << "  Item ID      Name       Power        Price     " << endl;
	cout << "---------------------------------------------------------" << endl;
	for (int i = 0; i < num; i++)
	{
		/*cout << "ID: " << invent[i].ID << endl;
		cout << "Name: " << invent[i].name << endl;
		cout << "Power: " << invent[i].power << endl;
		cout << "Price: " << invent[i].price << endl;*/

		cout << "      " << invent[i].ID << "        " << invent[i].name << "       " << invent[i].power << "       " << invent[i].price << endl;


	}
}

void firstexit()
{
}

void login()
{
	system("cls");
	cout << "Enter user name: ";
	cin >> username;
	if (username == "admin")
	{
		std::cout << "password: ";
		cin >> password;
		if (password == "admin")
		{
			adminmenu();
		}
		else
		{
			std::cout << "Invalid Password. Try Again." << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid Username. Try Again." << std::endl;
	}
}

void adminmenu()
{
	system("cls");
	cout << "                                       Admin Menu" << endl;
	cout << "                               --------------------------" << endl;
	cout << "1. Set Player Points" << endl;
	cout << "2. Add New Items to Inventory" << endl;
	cout << "3. Display Available list" << endl;
	cout << "4. Search Item Using Item ID" << endl;
	cout << "5. Back to Main Menu" << endl;
selection1:
	cout << "Please Enter any Number from 1 - 5: ";
	cin >> selection1;
	switch (selection1)
	{
	case 1:
		addpoint();
		system("cls");
		cout << "How many points would you like to enter ?: ";
		cin >> n;
		//cout << "display points:  "<<displaypoints ;
		adminmenu();
		break;
	case 2:
		addlist();
		system("cls");
		cout << "How many Items you want to Add : ";
		cin >> num;

		for (int i = 0; i < num; i++)
		{
			cout << "Enter the following information on your New list: \n";

			cout << "ID: ";
			cin >> invent[i].ID;
			cin.ignore();
			cout << "Name: ";
			cin.getline(invent[i].name, 100);
			cout << "Power: ";
			cin.getline(invent[i].power, 100);
			cout << "Price: ";
			cin >> invent[i].price;

		}
		adminmenu();

		break;
	case 3:
		listitems();


		/*if (num != 0)
		{
			for (int i = 0; i < num; i++)
			{
				cout << "ID: " << invent[i].ID << endl;
				cout << "Name: " << invent[i].name << endl;
				cout << "power: " << invent[i].power << endl;
				cout << "Price: " << invent[i].price << endl;
				cout << "-----------------------------\n";
			}
		}
		else
		{
			cout << "\n\n\t" << "THE LIST IS EMPTY \n\n";
		}
*/
		break;
	case 4:
		searchitems();
		adminmenu();
		break;
	case 5:
		exitmain();
		cout << "You want to EXIT ?" << endl;
		main();
		break;
	default:
		break;
	}
	//adminmenu();
}

void addpoint()
{

}

void displaypoints()
{
}

void addlist()
{


}
void listitems()
{
	cout << " test list" << endl;
	if (num != 0)
	{
		cout << " list of Numbers :  " << num << endl;

		cout << "  Item ID      Name       Power        Price     " << endl;
		cout << "---------------------------------------------------------" << endl;

		for (int i = 0; i < num; i++)
		{

			/*cout << "ID: " << invent[i].ID << endl;
			cout << "Name: " << invent[i].name << endl;
			cout << "Power: " << invent[i].power << endl;
			cout << "Price: " << invent[i].price << endl;
			cout << "-----------------------------\n";*/

			cout << "      " << invent[i].ID << "        " << invent[i].name << "       " << invent[i].power << "       " << invent[i].price << endl;

		}
	}
	else
	{
		cout << "\n\n\t" << "THE LIST IS EMPTY \n\n";
	}
}



void searchitems()
{
	bool flag = false;
	system("cls");
	cout << "Enter Item ID to Search: ";
	cin >> eno;
	do
	{
		cout << "  Item ID      Name       Power        Price     " << endl;
		cout << "---------------------------------------------------" << endl;
		for (int i = 0; i < num; i++)
		{
			if (invent[i].ID == eno)
			{
				flag = true;
				/*cout << "ID: " << invent[i].ID << endl;
				cout << "Name: " << invent[i].name << endl;
				cout << "Power: " << invent[i].power << endl;
				cout << "Price: " << invent[i].price << endl;
				cout << "-----------------------------\n";*/

				cout << "      " << invent[i].ID << "        " << invent[i].name << "       " << invent[i].power << "       " << invent[i].price << endl;

			}
		}
		if (flag == false)
		{
			cout << "item not found" << endl;
		}
		cout << "Do you want to search again? (y/n)" << endl;
		cin >> answer;
		system("cls");

	} while (answer == 'y' || answer == 'Y');

}
void exitmain()
{

}

void displayHeader(string header) {
	////uppercase the header

	//for (int i = 0; i < header.length(); i++)
	//{
	//	header[i] = toupper(header[i]);
	//}
	////display the header
	//cout << "\n\t" << header;
	//cout << "\n -----------------------" << endl;

}




