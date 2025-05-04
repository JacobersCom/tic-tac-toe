#pragma once

#include <iostream>

class MiniMax {
public:
    char aiMark;
    char humanMark;

    MiniMax();  // constructor

    int bestIndex(char board[]);
    int minimax(char board[], int depth, bool isMaxing);
    char equals3(char a, char b, char c);
    char winCondational(char board[]);
    void aiMove(char board[]);
};