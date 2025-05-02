

#include <iostream>
#include "gameBroad.h"
#include "MiniMax.h"
#include <chrono>


gameBroad board;
MiniMax max;

int main() {
#if 1
	board.Menu();
	board.gamePlayLoop();
	auto start = std::chrono::high_resolution_clock::now();
	std::cout << "AI Searching..." << std::endl;
	max.bestIndex(board.graph);
	auto stop = std::chrono::high_resolution_clock::now();
	auto time = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
	std::cout << "AI took " << time.count() << " milliseconds to find a space\n" << std::endl;
	board.update();
#endif
}
