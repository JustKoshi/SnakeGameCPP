#include "Logic.h"

void Logic::checkIfGO(Board& board) {
	if (board.getSnakeStatus().GetSnakexPos() <= 0 ||
		board.getSnakeStatus().GetSnakexPos() >= 20 ||
		board.getSnakeStatus().GetSnakeyPos() < 0 ||
		board.getSnakeStatus().GetSnakeyPos() >= 20) {
		GameOver = true;
	}
}

void Logic::AddPoint(Board& board) {
	if (board.getSnakeStatus().GetSnakexPos() == board.getFood().getX() && board.getSnakeStatus().GetSnakeyPos() == board.getFood().getY()) {
		Score++;
		board.getSnakeStatus().IncreaseLen();
		board.getFood().generateFood();
	}
	
}

void Logic::DrawPoints() {
	std::cout << "\n\n\nPoints: " << Score;
}