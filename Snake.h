#pragma once
class Snake {
protected:
	int snakeLen;
	int xPos;
	int yPos;
public:
	Snake() { xPos = 3; yPos = 4; snakeLen = 1; }
	int GetSnakexPos() { return xPos;}
	int GetSnakeyPos() { return yPos; }
	void SetSnakeyPos(int y) { yPos = y; }
	void SetSnakexPos(int x) { xPos = x; }

};