#pragma once

#include "gameBroad.h"
#include "Node.h"
#include<iostream>

class MiniMax : public gameBroad
{ 
public:
	char aiMark, humanMark;
	char bestMove;
	char score;

	MiniMax(): aiMark('X'), bestMove(' '),  score(' '), humanMark('O') {}

	char bestIndex(char board[]);
	char minimax(char board[],int depth,bool isMaxing);
	
};