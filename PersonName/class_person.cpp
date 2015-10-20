
#include "class_person.h"

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
	cout << fname << " " << lname;
}

//this function prints the last name then the first name
void Person::FormalShow() const {
	cout << lname << " " << fname;
}

