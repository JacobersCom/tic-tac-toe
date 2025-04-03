#pragma once

#include<iostream>
#include "gameBroad.h"
#include "Node.h"


class MiniMax
{ 
	bool minimax;
	int score; 
public:
	
	MiniMax();

	int minimax(Node* node, int depth, bool minimax);
};