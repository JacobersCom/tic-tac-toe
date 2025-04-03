#pragma once

#include<iostream>
#include "gameBroad.h"
#include "Node.h"

class gameBroad;

class MiniMax
{ 
	gameBroad broad;
	bool minimax_player;
	int score; 

public:
	
	MiniMax();
	int minimax(Node* node, int depth, bool minimax);
	char empty_cell_check();
};