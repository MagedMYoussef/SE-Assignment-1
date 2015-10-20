/** Programming Exercise 2 answer
*	Name: Maged Magdy Shokry
*	Section: 2
*	CSE - Software Engineering Course
**/

#include "class_person.h"

int main() {
	Person a;
	Person b("Omar");
	Person c("Magdy", "Maged");

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

	system("pause");
	return 0;
}


