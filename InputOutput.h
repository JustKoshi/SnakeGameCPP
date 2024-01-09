#pragma once

#include <conio.h>
#include "Snake.h"

class InOut {
protected:
	char direction;

public:
	InOut() { direction = 'w'; }
	void Input(Snake& sznejk);
};