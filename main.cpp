#include <iostream>
#include "MiniMax.h"


gameBroad board;
MiniMax max;

int main() {

	board.Menu();
	board.gamePlayLoop();
	max.empty_cell_check();
}

