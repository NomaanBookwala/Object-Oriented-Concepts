#include "Savings.h"



void Savings::withdraw()
{
	if (checkStatus()) {
		double wth;
		cout << "Please enter withdrawal amount: ";
		cin >> wth;
		BankAccount::withdraw(wth);
	}
	else {
			cout << "Inactive Account." << endl;
		}
}
void Savings::deposit() {
	double dep;
	cout << "Please enter deposit amount: ";
	cin >> dep;
	if (checkStatus()) {
		//Perform deposit
		BankAccount::deposit(dep);
	}
	else {
		if ((getBalance() + dep) >= 25) {
			BankAccount::deposit(dep);
		}
		else {
			cout << "Deposit must reactivate account to process.";
		}
	}
}

void Savings::monthlyProc() {
	if (checkStatus()) {
		//monthlyProc();

		//Sub monthlyCharge, call calcInt func, set monthly wth and deps to 0
		setBalance(getBalance() - getMonthlyCharge());
		calcInt();
		setNumDeposit(0);
		setWithdrawls(0);
		setMonthlyCharge(12);
	}
	if (getWithdrawls() > 4) {
		setMonthlyCharge(4 + (getWithdrawls() - 4));
	}

}
bool Savings::checkStatus() {
	if (getBalance() < 25) {
		status = false;
		return false;
	}
	else {
		status = true;
		return true;
	}
}
std::ostream & operator<<(std::ostream &out, Savings &obj) {
	out << std::setw(20) << "Account Status: " << std::setw(20);
	if (obj.getStatus()) { out << "Active"; }
	else { out << "Inactive"; } out << std::endl;

	out << std::setw(20) << "Balance($): " << std::setw(20);
	out << obj.getBalance() << std::endl;

	out << std::setw(20) << "Annual Interest(%): " << std::setw(20);
	out << obj.getInterest() << std::endl;

	return out;
}




