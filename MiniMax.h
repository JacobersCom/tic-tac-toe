#pragma once

#include "gameBroad.h"
#include "Node.h"
#include<iostream>

class MiniMax : public gameBroad
{ 
public:
	int best_value;
	bool miximizing_player; 
	int winner;
	char* value;
	
	MiniMax(){}
	MiniMax(bool player, char* mValue): miximizing_player(true), value(value = 0) {}
	char empty_cell_check();
	void copy_broad();
	int minimax(char board[9], bool player);
	int min(int best_vaule, char* value);
	int max(int best_value, char* value);
	void ai_loop(char board[], bool player);
};