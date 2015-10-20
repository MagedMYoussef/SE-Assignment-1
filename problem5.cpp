/** Problem 5 answer
 *	Name: Maged Magdy Shokry
 *	Section: 2
 *	CSE - Software Engineering Course
 **/
 
 class 	Bank_Account {
	private:
		string depositor_name;
		string account_number;
		int balance;
	public:
		Bank_Account(string, string, int);
		Bank_Account();
		void account_display();
		int account_deposite(int);
		int account_withdraw(int);
 };
 
 Bank_Account::Bank_Account(string name, string number, string balance) {
	 depositor_name = name;
	 account_number = number;
	 balance = balance;
 }
 
 Bank_Account::Bank_Account() {
	 depositor_name = "";
	 account_number = "";
	 balance = 0;
 }
 
 void Bank_Account::account_display() {
	 cout << "Depositor Name: " << depositor_name <<endl;
	 cout << "Account Number: " << account_number <<endl;
	 cout << "Balance: " << balance <<endl;
 }
 
 int Bank_Account::account_deposite(int amount) {
	 balance += amount;
	 return balance;
 }
 
 int Bank_Account::account_withdraw(int amount) {
	 balance -= amount;
	 return balance;
 }