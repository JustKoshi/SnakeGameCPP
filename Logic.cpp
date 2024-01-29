#include "Logic.h"

void Logic::checkIfGO(Board& board) { //check if snake is out of bounds
	std::vector<std::pair<int, int>> temptail = board.getSnakeStatus().getTail();
	auto temphead = std::make_pair(board.getSnakeStatus().GetSnakexPos(), board.getSnakeStatus().GetSnakeyPos());
	if (board.getSnakeStatus().GetSnakexPos() <= 0 ||
		board.getSnakeStatus().GetSnakexPos() >= 20 ||
		board.getSnakeStatus().GetSnakeyPos() < 0 ||
		board.getSnakeStatus().GetSnakeyPos() >= 20) {
		GameOver = true;
	}
	for (auto tail : temptail) {
		if (temphead == tail) {
			GameOver = true;
			break;
		}
	}
	
}

void Logic::AddPoint(Board& board) { //check if snake is on food
	if (board.getSnakeStatus().GetSnakexPos() == board.getFood().getX() && board.getSnakeStatus().GetSnakeyPos() == board.getFood().getY()) {
		Score++;
		board.getSnakeStatus().IncreaseLen();
		board.getFood().generateFood();
	}
	
}

void Logic::DrawPoints() { //draw points
	std::cout << "\n\n\nPoints: " << Score;
	
}