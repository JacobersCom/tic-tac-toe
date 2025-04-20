#pragma once

#include "Node.h"
#include<iostream>

<<<<<<< HEAD
class MiniMax : public gameBroad
{ 
	bool minimax_player; 
public:
	
	MiniMax(): minimax_player(true){}
	char empty_cell_check();
	void copy_broad();
	bool win_condational();
=======
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
>>>>>>> MiniMax
};