#include "BankAccount.h"



BankAccount::BankAccount(double b, float i)
{
	balance = b; interest = i;
	withdrawls = numDeposit = 0;
	monthlyCharge = 12;
}

void BankAccount::deposit(double dep) {
	balance += dep;
	numDeposit++;
}
void BankAccount::withdraw(double wth) {
	balance -= wth;
	numDeposit++;
}
void BankAccount::calcInt() {
	float monthInterestRate = interest / 12;
	double monthInterest = balance * monthInterestRate;
	balance = balance + monthInterest;

}