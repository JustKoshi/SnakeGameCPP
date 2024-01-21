#include "Logic.h"
#include <chrono>
#include <thread>
int main() {

	Board board;
	Logic logic;
	while (!logic.GetGameState()) {
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		board.getInput().Input(board.getSnakeStatus());
		logic.AddPoint(board);
		board.drawBoard();
		if (board.getSnakeStatus().GetLen() > 0) {
			board.getSnakeStatus().moveTail();
		}
		logic.checkIfGO(board);
		logic.DrawPoints();	
	}
	
}