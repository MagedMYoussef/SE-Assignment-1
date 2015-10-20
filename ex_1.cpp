/** Programming Exercise 1 answer
*	Name: Maged Magdy Shokry
*	Section: 2
*	CSE - Software Engineering Course
**/
#include <iostream>
using namespace std;

#include <string>

//Bank_Account class declaration
class	Bank_Account {
private:
	string depositor_name;
	string account_number;
	int balance;
public:
	Bank_Account();
	Bank_Account(string, string, int);
	void init();
	void init(string, string, int);
	void account_display();
	int account_deposite(int);
	int account_withdraw(int);
};


/*****************************************************
* A SIMPLE PROGRAM FOR SHOWING HOW THE CLASS WORKS
*****************************************************/

int main() {
	Bank_Account first_account;

	first_account.init("Ahmed", "100241225", 0);
	first_account.account_deposite(1000);
	first_account.account_display();
	first_account.account_withdraw(100);
	first_account.account_display();

	return 0;
}


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

