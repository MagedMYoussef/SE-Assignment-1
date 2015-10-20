/** Programming Exercise 6 answer
*	Name: Maged Magdy Shokry
*	Section: 2
*	CSE - Software Engineering Course
**/
#include "class_move.h"

int main() {
	Move movement;
	cout << "Start Moving: " << endl << endl;
	movement.showmove();
	cout << endl;
	cout << "Adding 25:40 to the current position: " << endl;
	Move addition(25, 40);
	movement = movement.add(addition);

	movement.showmove();
	cout << endl;
	cout << "Resetting to 100:100 position: " << endl;
	movement.reset(100, 100);
	movement.showmove();
	cout << endl;

	system("pause");
	return 0;
}