#include "InputOutput.h"
void InOut::Input(Snake &sznejk) { //gets input from user
	sznejk.SetPrevPos(std::make_pair(sznejk.GetSnakexPos(), sznejk.GetSnakeyPos()));
	if (_kbhit()) {
		switch (direction = _getch()) {
		case 'a':
			sznejk.SetSnakexPos(sznejk.GetSnakexPos() - 1);
			break;
		case 's':
			sznejk.SetSnakeyPos(sznejk.GetSnakeyPos() + 1);
			break;
		case 'd':
			sznejk.SetSnakexPos(sznejk.GetSnakexPos() + 1);
			break;
		case 'w':
			sznejk.SetSnakeyPos(sznejk.GetSnakeyPos() - 1);
			break;
		}
	}
	else {
		switch (direction) {
		case 'a':
			sznejk.SetSnakexPos(sznejk.GetSnakexPos() - 1);
			break;
		case 's':
			sznejk.SetSnakeyPos(sznejk.GetSnakeyPos() + 1);
			break;
		case 'd':
			sznejk.SetSnakexPos(sznejk.GetSnakexPos() + 1);
			break;
		case 'w':
			sznejk.SetSnakeyPos(sznejk.GetSnakeyPos() - 1);
			break;
		}
	}
}
