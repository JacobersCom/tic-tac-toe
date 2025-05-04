

#include <iostream>
#include "gameBroad.h"
#include "MiniMax.h"
#include <chrono>


gameBroad board;
MiniMax max;

int main() {
#if 1
    board.Menu();

    while (true) {
        board.gamePlayLoop();
        board.update();

        if (board.checkWin(max.humanMark) || board.isDraw()) break;

        auto start = std::chrono::high_resolution_clock::now();
        std::cout << "AI Searching..." << std::endl;

        max.aiMove(board.board);

        auto stop = std::chrono::high_resolution_clock::now();
        auto time = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

        std::cout << "AI took " << time.count() << " milliseconds to find a space\n" << std::endl;
        board.update();

        if (board.checkWin(max.aiMark) || board.isDraw()) break;
    }

    return 0;
#endif
}
