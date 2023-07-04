// Kegan Premuda
// This program takes in data of a week of snow fall reports, calculates the highest snow fall day and average snow fall, and outputs a snow fall report for the week.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string month;
	int const ROW = 2, COLUMN = 7;
	double highestSnow = 0.0, sumSnow = 0.0, averageSnow = 0.0, highestDate = 0.0;
	double snowConditions[ROW][COLUMN];

	cout << "Enter the name of the month for the snow report: ";
	cin >> month;
	//data entry
	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++) {
			if (j == 0) {
				cout << "\nEnter the date of day " << (i + 1) << ": ";
				cin >> snowConditions[j][i];
			}
			else if (j == 1) {
				cout << "Enter the snowfall in inches: ";
				cin >> snowConditions[j][i];
			}
		}
	}
	//highest snow fall
	for (int k = 0; k < COLUMN; k++) {
		if (snowConditions[1][k] > highestSnow) {
			highestSnow = snowConditions[1][k];
			highestDate = snowConditions[0][k];
		}
	}
	//average snow fall
	for (int l = 0; l < COLUMN; l++) {
		sumSnow += snowConditions[1][l];
	}
	averageSnow = sumSnow / COLUMN;

	cout << "\n\nSnow Report " << month << " " << static_cast<int>(snowConditions[0][0]) << " - " << static_cast<int>(snowConditions[0][6]);
	cout << "\n\nDate\t\tSnow Fall" << endl;

	for (int m = 0; m < COLUMN; m++) {
		cout << static_cast<int>(snowConditions[0][m]) << "\t\t" << fixed << setprecision(2) << snowConditions[1][m] << " inches\n";
	}
	cout << "\n\nHighest snow fall was " << highestSnow << " inches on " << month << " " << fixed << setprecision(0) << highestDate << ".\n";
	cout << "The average snow fall in a day was " << averageSnow << " inches.\n";

	return 0;
}
