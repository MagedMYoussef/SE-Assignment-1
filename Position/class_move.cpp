#include "class_move.h"
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