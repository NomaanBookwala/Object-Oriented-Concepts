#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 12;
class BankAccount
{
private:
	double balance;
	double numDeposit;
	double withdrawls;
	float interest;
	double monthlyCharge;

public:
	BankAccount() { balance = numDeposit = withdrawls = 0;  monthlyCharge = SIZE; interest = 0.0; }
	BankAccount(double b, float i);
	~BankAccount() {};

	//Mutators
	void setBalance(double b) { balance = b; }
	void setNumDeposit(double d) { numDeposit = d; }
	void setWithdrawls(double w) { withdrawls = w; }
	void setInterest(float i) { interest = i; }
	void setMonthlyCharge(double m) { monthlyCharge = m; }

	//Accessors
	double getBalance() { return balance; }
	double getNumDeposit() { return numDeposit; }
	double getWithdrawls() { return withdrawls; }
	float getInterest() { return interest; }
	double getMonthlyCharge() { return monthlyCharge; }

	//Virtual
	virtual void deposit(double dep);
	virtual void withdraw(double with);
	virtual void calcInt();
	//virtual void monthlyProc();
};

#endif