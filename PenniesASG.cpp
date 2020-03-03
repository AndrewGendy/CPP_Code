/*
	Andrew Gendy
	1/31/2018

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int PENNIES_IN_QUARTER	= 25;
const int PENNIES_IN_DIME		= 10;
const int PENNIES_IN_NICKLE		= 5;


int main() {

	string username;
	double quarters;
	double dimes;
	double nickles;
	double pennies;
	double totalPennies;

	//intro
	cout << "Hello there, my name is The_Pretty_Pennies_Calculator. What's your name? \n";
	cin >> username;

	cout << endl << "Nice to meet you " << username << "! I like you already, and I will help you count how many pennies you have. \n\n";

	//input
	cout << "Please enter in the amount of quarters you have. \n";
	cout << "Put the number 0 (zero) if you don't have that kind of currency. \n";
	cin >> quarters;

	cout << "Please enter in the amount of dimes you have. \n";
	cout << "Put the number 0 (zero) if you don't have that kind of currency. \n";
	cin >> dimes;

	cout << "Please enter in the amount of nickles you have. \n";
	cout << "Put the number 0 (zero) if you don't have that kind of currency. \n";
	cin >> nickles;

	cout << "Please enter in the amount of pennies you have. \n";
	cout << "Put the number 0 (zero) if you don't have that kind of currency. \n";
	cin >> pennies;

	//process
	totalPennies = (quarters * PENNIES_IN_QUARTER 
					+ dimes * PENNIES_IN_DIME 
					+ nickles * PENNIES_IN_NICKLE 
					+ pennies);

	//output
	cout << left;
	cout << endl << setw(8) << "Quarters"	<< ":"	<< quarters		<< endl;
	cout << endl << setw(8) << "Dimes"		<< ":"	<< dimes		<< endl;
	cout << endl << setw(8) << "Nickles"	<< ":"	<< nickles		<< endl;
	cout << endl << setw(8) << "Pennies"	<< ":"	<< pennies		<< endl;
	cout << "======================\n";
	cout << "Oh wow! you are very rich! you have: " << totalPennies << " pennie(s)/cent(s)." << endl;
	cout << "Please! buy me icecream :) \n\n";


	system("pause");
		return 0;
}