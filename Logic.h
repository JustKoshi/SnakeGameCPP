#pragma once
#include "Board.h"

class Logic {
protected:
	bool GameOver;
	int Score;
public:
	Logic() { GameOver = false; Score = 0; }
	bool GetGameState() { return GameOver; }
	void checkIfGO(Board& board);
	void AddPoint(Board& board);
	void DrawPoints();
};