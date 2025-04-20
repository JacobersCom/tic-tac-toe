#pragma once

#include "gameBroad.h"
#include "Node.h"
#include<iostream>

class MiniMax : public gameBroad
{ 
	bool minimax_player; 
public:
	
	MiniMax(): minimax_player(true) {}
	char empty_cell_check();
	void copy_broad();
	void win_condational();
};