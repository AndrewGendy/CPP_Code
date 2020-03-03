/*
Andrew 
2/28/2018
*/

#include<iostream>

using namespace std;

int main() {

	//do while loop
	
	int num;
	bool isInt;

	do {
		cout << "please enter an integer: " << endl;
		cin >> num;

		if (cin.fail()) {//input failure if true

			//clearing the buffer*******************************
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invalid data entry.\n";
			isInt = false;
		}
		else//not iput failure
		{
			//clearing the buffer*******************************
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			isInt = true;
		}
	} while (!isInt);
	cout << "the integer entred in: " << num << endl;
	

	//while loop
	int number;
	cout << "please enter a number: " << endl;

	while (!(cin >> number)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "invalid data entry, please enter an integer: " << endl;
	}
	cout << "the integer entred in: " << number << endl;
	

	//for loop
	double salary;
	cout << "please enter a double: " << endl;

	for (;;) {
		if (cin >> salary) {
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invalid data entry, please enter a double" << endl;
		}
	}
	cout << "the double entred in: " << salary << endl;
	
	//----------------------------------------------------------------------------------------------

	//range
	int num2;
	//bool isInt;
	do {
		cout << "please enter an intger between 1 and 9: " << endl;
		cin >> num2;

		if (cin.fail()) {//input failure if true

			//clearing the buffer*******************************
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invalid data entry.\n";
			//isInt = false;
		}
		else//not iput failure
		{
			//clearing the buffer*******************************
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (!(num2 >= 1 && num2 <= 9))
				cout << "out of range\n";
		}
	} while (!(num2 >= 1 && num2 <= 9));
	cout << "the integer entred in: " << num2 << endl;
	
	//------------------------------------------------------------------------------------------

	char yn;
	do {
		cout << "do you want to continue? (y/n)" << endl;
		cout << "you must enter Y or N " << endl;
		cin >> yn;

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	} while ((yn != 'y') && (yn != 'Y') && (yn != 'n') && (yn != 'N'));
	

	system("pause");
	return 0;
}