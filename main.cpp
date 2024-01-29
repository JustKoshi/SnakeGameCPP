#include "Logic.h"
#include <chrono>
#include <thread>
int main() {

	Board board;
	Logic logic;

	board.StartScreen();
	std::this_thread::sleep_for(std::chrono::seconds(3));
	system("cls");
	while (!logic.GetGameState()) {
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		
		board.getInput().Input(board.getSnakeStatus());
		logic.AddPoint(board);
		logic.checkIfGO(board);
		board.drawBoard();
		if (board.getSnakeStatus().GetLen() > 0) {
			board.getSnakeStatus().moveTail();
		}
		
	
		logic.DrawPoints();	
	}
	
}