#pragma once

#include "gameBroad.h"
#include "Node.h"
#include<iostream>

class MiniMax : public gameBroad
{ 
public:
	bool miximizing_player; 
	
	MiniMax(): miximizing_player(true) {}
	char empty_cell_check();
	void copy_broad();
	void minimax(char board[9], bool player);
};