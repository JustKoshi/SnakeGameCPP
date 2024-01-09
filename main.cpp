#include "Logic.h"
#include <chrono>
#include <thread>
int main() {
	Logic logic;
	Board board;
	while (!logic.GetGameState()) {
		std::this_thread::sleep_for(std::chrono::milliseconds(300));
		board.getInput().Input(board.getSnakeStatus());
		logic.AddPoint(board);
		board.drawBoard();
		logic.checkIfGO(board);
		logic.DrawPoints();
	}
}