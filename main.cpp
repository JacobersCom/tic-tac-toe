

#include <iostream>
#include "gameBroad.h"
#include "MiniMax.h"


gameBroad board;
MiniMax max;

int main() {

	board.Menu();
#if 1
		board.gamePlayLoop();
		board.graph[max.minimax(board.graph, max.miximizing_player)] = 'O';
		
#endif
}
