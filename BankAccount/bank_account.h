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

