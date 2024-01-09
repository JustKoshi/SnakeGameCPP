#pragma once
#include <iostream>
#include "InputOutput.h"
#include "Snake.h"
#include "Food.h"
class Board {
	private:
		int length;
		int height;
		InOut out;
		Snake snake;
	public:
		Board():out(){ length = 21; height = 20; }
		void drawBoard();
		InOut& getInput() { return out; }
		Snake& getSnakeStatus() { return snake; }

};