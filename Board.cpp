#include "Board.h"

void Board::drawBoard() {
	system("cls");
	std::cout << "*********************\n";
	for (int i = 0; i < height; i++) {
	
		for (int j = 0; j < length; j++) {
			if (j == 0 || j == length-1) {
				std::cout << "*";
			}
			else if (i == out.getSnake().GetSnakeyPos() && j == out.getSnake().GetSnakexPos()) {
				std::cout << "O";
			}

			else
				std::cout <<" ";
		}
		std::cout << '\n';
	}
	std::cout << "*********************\n";
	std::cout << "\n\n\n\n" << getSnakeStatus().GetSnakeyPos()<<" "<< getSnakeStatus().GetSnakexPos();
}
