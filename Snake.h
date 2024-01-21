#pragma once
#include <vector>
#include <utility>

class Snake {
protected:
	int xPos;
	int yPos;
	int len;
	std::vector<std::pair<int, int>> tail;
public:
	Snake() { xPos = 3; yPos = 4; len = 0 ;}
	int GetSnakexPos() { return xPos;}
	int GetSnakeyPos() { return yPos; }
	int GetLen() { return len; }
	std::vector<std::pair<int, int>> getTail() { return tail; }
	void SetSnakeyPos(int y) { yPos = y; }
	void SetSnakexPos(int x) { xPos = x; }
	void IncreaseLen() { tail.push_back(std::make_pair(xPos, yPos)); len++; }
	void moveTail();
};