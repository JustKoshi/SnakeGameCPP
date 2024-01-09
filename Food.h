#pragma once
#include <random>

class Food {
private:
		int food_x;
		int food_y;
public:
	Food() { food_x = 10; food_y = 10; };
	int getX() { return food_x; }
	int getY() { return food_y; }
	void generateFood();
		


};