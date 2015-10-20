/** Programming Exercise 6 answer
*	Name: Maged Magdy Shokry
*	Section: 2
*	CSE - Software Engineering Course
**/
#include <iostream>
using namespace std;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); // sets x, y to a, b
	void showmove() const; // shows current x, y values
	Move add(const Move & m) const;
	// this function adds x of m to x of invoking object to get new x,
	// adds y of m to y of invoking object to get new y, creates a new
	// move object initialized to new x, y values and returns it
	void reset(double a = 0, double b = 0); // resets x,y to a, b
};

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

/**************************************************
* CLASS DEFINITIONS
**************************************************/
Move::Move(double a, double b) {
	x = a;
	y = b;
}

void Move::showmove() const {
	cout << "The current position is " << x << ":" << y << endl;
}

Move Move::add(const Move &m) const  {
	//declare new position x, y
	double new_moveX = this->x + m.x;
	double new_moveY = this->y + m.y;

	//create a new Move object
	Move new_move(new_moveX, new_moveY);

	return new_move;
}

void Move::reset(double a, double b) {
	x = a;
	y = b;
}	