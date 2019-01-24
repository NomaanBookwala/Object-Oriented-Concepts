#include "BankAccount.h"
#include "Savings.h"
#include "Checking.h"

int main() {
	Savings account1(false, 1500, 3.2);
	Checking account2(1200, 12.0);

	//User Menu
	int choice1 = 0, choice2 = 0;

	while (choice1 != 3) {

		cout << "Chose account \n" << "1) Savings Account\n2) Checking Account\n3) Exit" << endl;
		cin >> choice1;
		cout << endl;

		if (choice1 == 1) {
			cout << "Please Enter an option" << endl;
			cout << "1) Print account info" << endl;
			cout << "2) Withdrawl" << endl;
			cout << "3) Deposit" << endl;
			cin >> choice2;

			switch (choice2) {
			case 1: cout << account1; break;
			case 2: account1.withdraw(); break;
			case 3: account1.deposit(); break;
			}
		}
		else if (choice1 == 2) {
			cout << "Please Enter an option" << endl;
			cout << "1) Print account info" << endl;
			cout << "2) Withdrawl" << endl;
			cin >> choice2;

			switch (choice2) {
			case 1: cout << account2; break;
			case 2: account2.withdraw(); break;
			}
		}
		cout << endl;
		}



	cin.get();
	return 0;
}