/** Programming Exercise 1 answer
*	Name: Maged Magdy Shokry
*	Section: 2
*	CSE - Software Engineering Course
**/

#include "bank_account.h"

/*****************************************************
* A SIMPLE PROGRAM FOR SHOWING HOW THE CLASS WORKS
*****************************************************/

int main() {
	Bank_Account first_account;

	first_account.init("Ahmed", "100241225", 0);
	first_account.account_deposite(1000);
	first_account.account_display();
	cout << endl;
	first_account.account_withdraw(100);
	first_account.account_display();
	cout << endl;
	system("pause");
	return 0;
}
