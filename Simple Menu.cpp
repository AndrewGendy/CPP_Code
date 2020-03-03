/*
Andrew
3/9/2018
*/

#include<iostream>
#include <string>

using namespace std;

void showAccountReceivebleManue();
void showAccountPaibleManue();


int main() {

	char selection;
	do {
		system("cls");
		cout << "1 : Accounts Receivable" << endl;
		cout << "2 : Accounts Paayable" << endl;
		cout << "3 : Shipping" << endl;
		cout << "4 : Exit" << endl;
		cin >> selection;

		switch (selection)
		{
		case '1':
			system("cls");
			cout << "ACCOUNT RECIEVABLE\n";
			showAccountReceivebleManue();
			//cout << "Accounts Receivable" << endl;
			//system("pause");
			break;
		case '2':
			system("cls");
			cout << "ACCOUNT PAIYABLE\n";
			showAccountPaibleManue();
			//cout << "Accounts Paayable" << endl;
			//system("pause");
			break;
		case '3':
			system("cls");
			cout << "Shipping" << endl;
			system("pause");
			break;
		default:
			break;
		}
	} while (selection != 'x'  && selection != 'X');


	system("pause");
	return 0;
}

void showAccountReceivebleManue() {
	char selection;
	do {
		system("cls");
		cout << "ACCOUNT RECIEVABLE\n";
		cout << "1 : get check" << endl;
		cout << "2 : generat recipt" << endl;
		cout << "x : exit" << endl;
		cin >> selection;

		switch (selection)
		{
		case '1':
			system("cls");
			cout << "get check section" << endl;
			system("pause");
			break;
		case '2':
			system("cls");
			cout << "generat recipt section" << endl;
			system("pause");
			break;
		default:
			break;
		}
	} while (selection != 'x'  && selection != 'X');
}

void showAccountPaibleManue() {
	char selection;
	do {
		system("cls");
		cout << "ACCOUNT PAIYABLE\n";
		cout << "1 : get check" << endl;
		cout << "2 : generat availability" << endl;
		cout << "x : exit" << endl;
		cin >> selection;

		switch (selection)
		{
		case '1':
			system("cls");
			cout << "get check section" << endl;
			system("pause");
			break;
		case '2':
			system("cls");
			cout << "generat recipt section" << endl;
			system("pause");
			break;
		default:
			break;
		}
	} while (selection != 'x'  && selection != 'X');
}