#ifndef SAVINGS_H
#define SAVINGS_H

#include "BankAccount.h"

class Savings : public BankAccount  
{
private:
	bool status;

public:
	bool getStatus() { return status; }
	
	virtual void withdraw();
	virtual void deposit();
	virtual void monthlyProc();

	bool checkStatus();
	Savings(bool s, double b, float i) : BankAccount(b, i) { status; }
	Savings() : BankAccount() { status = false; }

	~Savings() {};
	friend std::ostream &operator <<(std::ostream &, Savings &);
};

#endif