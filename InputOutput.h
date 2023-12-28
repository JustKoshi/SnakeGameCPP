#pragma once

#include <conio.h>
#include "Snake.h"

class InOut {
protected:
	Snake sznejk;
public:
	InOut():sznejk(){}
	void Input();
	Snake& getSnake() { return sznejk; }

};