#include <iostream>
#include "gameBroad.h"
#include "Node.h"


gameBroad board;
Node node(1);

int main() {

	board.Menu();
	board.gamePlayLoop();
}

