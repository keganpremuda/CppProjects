// Bank Account Project
// Kegan Premuda

#include <iostream>
#include <iomanip>
using namespace std;
#include "bankAccount.h"


int main()
{
	bankAccount myAccount(1000.50, 1111, "John William", 0.05);
	myAccount.deposit(500);
	myAccount.withdraw(200);
	myAccount.addInterest();
	myAccount.displayAccountSummary();
	return 0;
}