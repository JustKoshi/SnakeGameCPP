#include "Board.h"

void Board::drawBoard() { //draws the board
	system("cls");
	bool flag = false;
	std::cout << "#####################\n";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < length; j++) {
            bool printed = false;
            if (j == 0 || j == length - 1) {
                std::cout << "#";
                printed = true;
            }
            else if (i == food.getY() && j == food.getX()) {
                std::cout << "F";
                printed = true;
            }
            else if (i == snake.GetSnakeyPos() && j == snake.GetSnakexPos()) {
                std::cout << "O";
                printed = true;
            }
            else {
                for (auto para : snake.getTail()) {
                    if (i == para.second && j == para.first) {
                        std::cout << "o";
                        printed = true;
                        break;
                    }
                }
            }

            if (!printed) {
                std::cout << " ";
            }
		}
		std::cout << '\n';
	}
	std::cout << "#####################\n";
	
}



void Board::StartScreen() { //draws the start screen
    std::cout << "#####################\n";
    for (int i = 0; i < height; i++) {
        if (i == height / 2) {
            std::cout << "# move = click WASD #\n";
        }
        else {
            std::cout << "#                   #\n";
        }
    }
    std::cout << "#####################\n";
}



