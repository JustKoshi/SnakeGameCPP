#include "Logic.h"

int main() {
	Logic logic;
	Board board;
	while (!logic.GetGameState()) {
		board.getInput().Input();
		board.drawBoard();
		logic.checkIfGO(board);
	}
}