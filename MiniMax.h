#pragma once

#include<iostream>
#include "gameBroad.h"


class MiniMax
{ 
	char current_broad_state[3][3] = {

		 {'_','_','_'},
		 {'_','_','_'},
		 {'_','_','_'}

	};

	char ai_mark = '0';
	char human_mark = 'X';

public:
	
	MiniMax();
	char get_all_empty_cells();
	void winner_check(char currbs, char currmark);
};

