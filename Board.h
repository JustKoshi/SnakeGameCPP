#pragma once
#include <iostream>
#include "InputOutput.h"

class Board {
	private:
		int length;
		int height;
		InOut out;
	public:
		Board():out(){ length = 20; height = 20; }
		void drawBoard(); //draws board
		InOut& getInput() { return out; }
		Snake& getSnakeStatus() { return out.getSnake(); }

};