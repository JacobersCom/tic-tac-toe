

#include <iostream>
#include "gameBroad.h"
#include "MiniMax.h"


gameBroad board;
MiniMax max;

int main() {

	board.Menu();
	board.gamePlayLoop();
#if 1
	max.minimax(board.graph, max.miximizing_player);
#endif
}

