// Kegan Premuda
// This program takes in the tests and homework scores of a student, calculates their final score, and outputs their final letter grade.
#include <iostream>
#include <iomanip>
using namespace std;

double calcFinalScore(double test1, double test2, double hw);
void printFinalScore(double finalscore);
void readTestandHwScore(double &test1, double &test2, double &hw);

int main() {
	double test1, test2, hw;
	readTestandHwScore(test1, test2, hw);

	double finalscore = calcFinalScore(test1, test2, hw);
	cout << "\nThe student's final score is " << fixed << setprecision(2) << finalscore << ".";

	printFinalScore(finalscore);

	system("PAUSE");
	return 0;
}
//read in scores
void readTestandHwScore(double &test1, double &test2, double &hw) {
	cout << "Enter the score for test #1: ";
	cin >> test1;
	cout << "\nEnter the score for test #2: ";
	cin >> test2;
	cout << "\nEnter the score for the homework: ";
	cin >> hw;
}
//calculate final score
double calcFinalScore(double test1, double test2, double hw) {
	return ((test1 * 0.4) + (test2 * 0.4) + (hw * 0.2));
}
//print final score
void printFinalScore(double finalscore) {
	if (finalscore >= 90.0) {
		cout << "\nThe student's final letter grade is an A.\n";
	}
	else if (finalscore >= 80) {
		cout << "\nThe student's final letter grade is an B.\n";
	}
	else if (finalscore >= 70) {
		cout << "\nThe student's final letter grade is an C.\n";
	}
	else if (finalscore >= 60) {
		cout << "\nThe student's final letter grade is an D.\n";
	}
	else {
		cout << "\nThe student's final letter grade is a big fat F!\n";
	}
}