#pragma once

#include <conio.h>
#include "Snake.h"

class InOut { //class for input and output
protected:
	char direction;

public:
	InOut() { direction = 'w'; }
	void Input(Snake& sznejk);
};