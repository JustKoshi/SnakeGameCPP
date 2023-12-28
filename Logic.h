#pragma once
#include "Board.h"

class Logic {
protected:
	bool GameOver;
public:
	Logic() { GameOver = false; }
	bool GetGameState() { return GameOver; }
	void checkIfGO(Board& board) {
		if (board.getSnakeStatus().GetSnakexPos() <= 0 ||
			board.getSnakeStatus().GetSnakexPos() >= 20 ||
			board.getSnakeStatus().GetSnakeyPos() <= 0 ||
			board.getSnakeStatus().GetSnakeyPos() >= 20) {
			GameOver = true;
		}
	}
};