/*

Andrew Gendy
Vote
4/22/18

*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int NUMBER_OF_CANADIDATES = 5;

void collectData(string canadidatesNames[NUMBER_OF_CANADIDATES], int votes[NUMBER_OF_CANADIDATES], int &totalVotes); // collecting Canadidates names
void calculatePercentage(double votesPercentage[NUMBER_OF_CANADIDATES], int votes[NUMBER_OF_CANADIDATES], int &totalVotes); // calculating percentages
int determineWinner(int votes[NUMBER_OF_CANADIDATES]);
void showResults(string canadidatesNames[NUMBER_OF_CANADIDATES], int votes[NUMBER_OF_CANADIDATES], double votesPercentage[NUMBER_OF_CANADIDATES], int &totalVotes);
void collectNumberOfVotes(int &userInput);

int main() {

	string canadidatesNames[NUMBER_OF_CANADIDATES];
	int votes[NUMBER_OF_CANADIDATES], totalVotes;
	double votesPercentage[NUMBER_OF_CANADIDATES];

	collectData(canadidatesNames, votes, totalVotes);
	calculatePercentage(votesPercentage, votes, totalVotes);
	showResults(canadidatesNames, votes, votesPercentage, totalVotes);
	
	system("pause");
	return 0;

}

void collectData(string canadidatesNames[NUMBER_OF_CANADIDATES], int votes[NUMBER_OF_CANADIDATES], int &totalVotes) {
	// input the name and votes for all canadidates using for loop
	totalVotes = 0;

	cout << "Please input the 5 candidates followed by the votes they recieved i.e. Andrew 2000:\nMake Sure you put a *SPACE* between the name and the number of votes\n\n";

	for(int counter = 0; counter < NUMBER_OF_CANADIDATES; counter ++) { 
		cin >> canadidatesNames[counter];
		collectNumberOfVotes(votes[counter]);

		totalVotes = totalVotes + votes[counter]; // to find total votes
	}

}

void calculatePercentage(double votesPercentage[NUMBER_OF_CANADIDATES], int votes[NUMBER_OF_CANADIDATES], int &totalVotes) {
	// calculating percentage using for loop

	for (int counter = 0; counter < NUMBER_OF_CANADIDATES; counter++) {
		votesPercentage[counter] = ((static_cast<double>(votes[counter]) / totalVotes) * 100.0);
	}


}

int determineWinner(int votes[NUMBER_OF_CANADIDATES]) {
	int max = 0, holder = 0;

	for (int i = 0; i < NUMBER_OF_CANADIDATES; i++) {
		if (votes[i] == max) {
			cout << "\nWE HAVE A TIE" << endl;
		}if (votes[i] > max) {
			max = votes[i];
			holder = i;
		}
	}
	return holder;
}

void showResults(string canadidatesNames[NUMBER_OF_CANADIDATES], int votes[NUMBER_OF_CANADIDATES], double votesPercentage[NUMBER_OF_CANADIDATES], int &totalVotes) {

	cout << "\nCanadidate's Name\tVotes Recieved\tPercentage\n\n";
	for (int i = 0; i < NUMBER_OF_CANADIDATES; i++) {
		cout << setw(19) << left << fixed << canadidatesNames[i] << setw(14) << right << votes[i] << setw(15) << setprecision(2) <<  votesPercentage[i] <<  endl;
	}

	cout << "\nTotal Votes: " << totalVotes << endl;
	cout << endl << "The Winner of the Election is: " << canadidatesNames[determineWinner(votes)] << endl;

}

void collectNumberOfVotes(int &userInput) {

	bool isInt;

	do {
		cin >> userInput;

		if (cin.fail()) {			//input failure if true

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "invalid data entry. Please enter a correct number of votes\n";
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