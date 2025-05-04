#pragma once

#include "gameBroad.h"
#include "Node.h"
#include<iostream>

class MiniMax : public gameBroad
{ 
public:
	char aiMark, humanMark;
	int bestMove;
	int score;
	int openSpace;

	MiniMax(): aiMark('X'), bestMove(' '),  score(' '), humanMark('O'), openSpace(0) {}

	int bestIndex(char board[]);
	int minimax(char board[],int depth,bool isMaxing);
	char equals3(char a, char b, char c);
	void winCondational(char board[]);
	
};