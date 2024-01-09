#include "Food.h"

void Food::generateFood() {
	std::random_device rd;
	std::mt19937 gen(rd());
	int lower_bound_1 = 1;
	int upper_bound = 19;

	std::uniform_int_distribution<> distrib(lower_bound_1, upper_bound);
	std::uniform_int_distribution<> distrib2(lower_bound_1-1, upper_bound);
	food_x = distrib(gen);
	food_y = distrib2(gen);

}