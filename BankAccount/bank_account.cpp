#include "bank_account.h"
/*******************************************
* ADDING THE DEFINITIONS OF THE CLASS
*******************************************/

//multiple arguments constructor
Bank_Account::Bank_Account(string name, string number, int balance) {
	depositor_name = name;
	account_number = number;
	balance = balance;
}

//default non-argument constructor
Bank_Account::Bank_Account() {
	depositor_name = "";
	account_number = "";
	balance = 0;
}

void Bank_Account::init() {
	depositor_name = "";
	account_number = "";
	balance = 0;
}

void Bank_Account::init(string name, string number, int amount) {
	depositor_name = name;
	account_number = number;
	balance = amount;
}

void Bank_Account::account_display() {
	cout << "Depositor Name: " << depositor_name << endl;
	cout << "Account Number: " << account_number << endl;
	cout << "Balance: " << balance << endl;
}

int Bank_Account::account_deposite(int amount) {
	balance += amount;
	return balance;
}

int Bank_Account::account_withdraw(int amount) {
	balance -= amount;
	return balance;
}
