#include "MiniMax.h"

MiniMax::MiniMax()
{

}

char MiniMax::get_all_empty_cells()
{
	for (auto row = 0; row < 2; ++row) {
		for (auto column = 0; column < 2; ++column) {
			
			return current_broad_state[row][column] != 'X' && current_broad_state[row][column] != '0';
		}
	}
	
}

void MiniMax::winner_check(char currbs, char currmark)
{
	
}


