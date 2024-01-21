#include "Snake.h"

void Snake::moveTail() {
	for (int i = tail.size()-1; i >0 ; --i) {
		tail[i] = tail[i - 1];
	}
	tail[0] = std::make_pair(xPos, yPos);

}