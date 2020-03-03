/*

Andrew Gendy
Inflation Rates
3/22/18

*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


void collectData(string prompt, double &userInput);
double inflationProcess(double oldPrice, double newPrice);
string compareAndOutput(double rate1, double rate2);


int main() {

	double itemPriceNow, itemPriceOneYearAgo, itemPriceTwoYearsAgo, currentInflation, inflationOneYearAgo;


	collectData("Please enter the item's current price", itemPriceNow);
	collectData("Please enter the item's price ONE year ago", itemPriceOneYearAgo);
	collectData("Please enter the item's price TWO years ago", itemPriceTwoYearsAgo);

	currentInflation = inflationProcess(itemPriceOneYearAgo, itemPriceNow);
	inflationOneYearAgo = inflationProcess(itemPriceTwoYearsAgo, itemPriceOneYearAgo);
	

	cout << "\nThe item's current price is: " << itemPriceNow << endl;
	cout << "The item's price a year ago is: " << itemPriceOneYearAgo << endl;
	cout << "The item's price two years ago is: " << itemPriceTwoYearsAgo << endl;
	cout << "Current inflation is: " << currentInflation << "%" << endl;
	cout << "Inflation one year ago is: " << inflationOneYearAgo << "%" << endl;

	cout << endl << compareAndOutput(currentInflation, inflationOneYearAgo);



	system("pause");
	return 0;

}


void collectData(string prompt, double &userInput) {

	bool isInt;

	do {
		cout << prompt << endl;
		cin >> userInput;

		if (cin.fail()) {			//input failure if true

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invalid data entry.\n";
			isInt = false;
		}
		else if (userInput <= 0) {		//negative or 0 value
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter a positive value\n";
			isInt = false;


		}
		else {						//no input failure
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			isInt = true;
		}
	} while (!isInt);
}

double inflationProcess(double oldPrice, double newPrice) {

	double inflationRate;

	inflationRate = ((newPrice - oldPrice) / oldPrice) *100;

		return inflationRate;
}

string compareAndOutput(double rate1, double rate2) {

	if (rate1 > rate2) {
		return "Inflation Rate is Increasing!\n";
	}
	else if (rate1 < rate2) {
		return "Inflation Rate is Decreasing!\n";
	}
	else {
		return "Inflation Rate is unchanged!\n";
	}
		
}