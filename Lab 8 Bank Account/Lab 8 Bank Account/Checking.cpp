#include "Checking.h"

void Checking::withdraw() {
	double wth;
	std::cout << "Enter check amount: "; std::cin >> wth;
	if ((getBalance() - wth) < 0) {
		
		setBalance(getBalance() - 15);
	}

	else {
		BankAccount::withdraw(wth);
	}
}

void Checking::monthlyProc() {
	setMonthlyCharge(5 + 0.1*getWithdrawls());

	//Base class implimentation
	setBalance(getBalance() - getMonthlyCharge());
	calcInt();
	setNumDeposit(0); setWithdrawls(0);
	setMonthlyCharge(12);
}

std::ostream & operator<<(std::ostream &out, Checking &obj) {
	out << setw(20) << "Balance($): " << setw(20) << obj.getBalance() << endl;
	out << setw(20) << "Annual Interest(%): " << setw(20) << obj.getInterest() << endl;

	return out;
};

