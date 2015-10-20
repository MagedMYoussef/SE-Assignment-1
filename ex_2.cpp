/** Programming Exercise 2 answer
*	Name: Maged Magdy Shokry
*	Section: 2
*	CSE - Software Engineering Course
**/
#include <iostream>
using namespace std;

#include <string>

class Person {
private:
	static const int LIMIT = 25;
	string lname; // Person’s last name
	char fname[LIMIT]; // Person’s first name
public:
	Person() { lname = ""; fname[0] = '\0'; } // #1
	Person(const string & ln, const char * fn = "Heyyou"); // #2

	// the following methods display lname and fname
	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstname format	
};

int main() {
	Person a;
	Person b("Andrew");
	Person c("johansson", "Scarlett");

	a.Show();
	cout << endl;
	a.FormalShow();
	cout << endl << endl;

	b.Show();
	cout << endl;
	b.FormalShow();
	cout << endl << endl;

	c.Show();
	cout << endl;
	c.FormalShow();
	cout << endl << endl;
}

/**************************************************
* CLASS DEFINITIONS
**************************************************/

//this constructor defines the name of the person
Person::Person(const string &ln, const char *fn) {
	//"ln" is passed by reference
	lname = ln;

	//"fn" is a pointer to array of characters
	for (int i = 0; i < LIMIT; i++) {
		fname[i] = *(fn + i);
	}
}

//this function prints the first name then the last name
void Person::Show() const {
	//printing each character
	for (int i = 0; i < LIMIT; i++) {
		cout << fname[i];
	}
	cout << " ";	//separating the 2 names
	//printing the last name
	cout << lname;
}

//this function prints the last name then the first name
void Person::FormalShow() const {
	//printing the last name
	cout << lname;
	cout << " ";	//separating the 2 names
	//printing each character
	for (int i = 0; i < LIMIT; i++) {
		cout << fname[i];
	}
}

