#pragma once
#include <iostream>
#include <iomanip>
using namespace std;



class bankAccount {
public:
	bankAccount() {
		balance = 0.0;
		accountNumber = 0;
		ownerName = " ";
		interestRate = 0.0;
	}
	bankAccount(double thebalance, int theaccountNumber, string theownerName, double theinterestRate) {
		balance = thebalance;
		accountNumber = theaccountNumber;
		ownerName = theownerName;
		interestRate = theinterestRate;
	}
	void displayAccountSummary() {
		cout << "Account Number: " << accountNumber << endl;
		cout << "Owner's Name: " << ownerName << endl;
		cout << "Balance: $" << setprecision(2) << fixed << balance << endl;
		cout << "Interest Rate: " << setprecision(2) << fixed << interestRate * 100 << "%" << endl;
	}
	double getBalance() {
		return balance;
	}
	void deposit(double deposit) {
		balance += deposit;
	}
	void withdraw(double withdraw) {
		balance -= withdraw;
	}
	void addInterest() {
		balance = balance * (1 + interestRate);
	}

private:
	double balance;
	int accountNumber;
	string ownerName;
	double interestRate;
};