#pragma once

#include "Node.h"
#include<iostream>

class gameBroad;

class MiniMax
{ 
	bool minimax_player;
	int score; 

public:
	
	MiniMax();
	char empty_cell_check();
	void copy_broad();
	void win_condational();

	gameBroad broad;
};