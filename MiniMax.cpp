#include "MiniMax.h"

MiniMax::MiniMax() : aiMark('X'), humanMark('O') {}

int MiniMax::bestIndex(char board[]) {
    int bestMove = -1;
    int bestScore = -10000; // large negative number

    for (size_t i = 0; i < 9; i++) {
        if (board[i] == '_') {
            board[i] = aiMark;
            int score = minimax(board, 0, false);
            board[i] = '_';

            if (score > bestScore) {
                bestScore = score;
                bestMove = i;
            }
        }
    }

    if (bestMove == -1) {
        std::cout << "AI error: No valid move found.\n";
    }

    return bestMove;
}

int MiniMax::minimax(char board[], int depth, bool isMaxing) {
    char result = winCondational(board);
    if (result == aiMark) return 10 - depth;
    if (result == humanMark) return depth - 10;

    bool isFull = true;
    for (size_t i = 0; i < 9; i++)
        if (board[i] == '_') isFull = false;
    if (isFull) return 0;

    if (isMaxing) {
        int bestScore = -10000;
        for (size_t i = 0; i < 9; i++) {
            if (board[i] == '_') {
                board[i] = aiMark;
                int score = minimax(board, depth + 1, false);
                board[i] = '_';
                bestScore = std::max(bestScore, score);
            }
        }
        return bestScore;
    }
    else {
        int bestScore = 10000;
        for (size_t i = 0; i < 9; i++) {
            if (board[i] == '_') {
                board[i] = humanMark;
                int score = minimax(board, depth + 1, true);
                board[i] = '_';
                bestScore = std::min(bestScore, score);
            }
        }
        return bestScore;
    }
}

char MiniMax::equals3(char a, char b, char c) {
    return a == b && b == c && a != '_';
}

char MiniMax::winCondational(char board[]) {
    int winningCombos[8][3] = {
        {0,1,2},{3,4,5},{6,7,8},
        {0,3,6},{1,4,7},{2,5,8},
        {0,4,8},{2,4,6}
    };

    for (auto& combo : winningCombos) {
        if (equals3(board[combo[0]], board[combo[1]], board[combo[2]])) {
            return board[combo[0]];
        }
    }

    return '_';
}

void MiniMax::aiMove(char board[]) {
    int move = bestIndex(board);
    if (move != -1) {
        board[move] = aiMark;
        std::cout << "AI move: " << move << std::endl;
    }
}