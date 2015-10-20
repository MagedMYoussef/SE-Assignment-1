 /** Problem 7 answer
 *	Name: Maged Magdy Shokry
 *	Section: 2
 *	CSE - Software Engineering Course
 **/
 
 //Bank_Account class declaration
 class 	Bank_Account {
	private:
		string depositor_name;
		string account_number;
		int balance;
	public:
		/*******************************************
		 * ADDING THE DECLARATION OF THE CONSTRUCTORS
		 *******************************************/
		Bank_Account(string, string, int);
		Bank_Account();
		/*******************************************/
		void init();
		void init(string, string, int);
		void account_display();
		int account_deposite(int);
		int account_withdraw(int);
 };
