#ifndef CHECKING_H
#define CHECKING_H
#include "BankAccount.h"	
class Checking : public BankAccount
{
	public:
	virtual void withdraw();
	virtual void monthlyProc();

	Checking(double b, float i) : BankAccount(b, i) {};
	Checking() {};
	~Checking() {};

	friend std::ostream &operator <<(std::ostream& out, Checking& obj);

};

#endif