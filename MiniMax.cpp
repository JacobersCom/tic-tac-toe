#include "MiniMax.h"

char MiniMax::empty_cell_check()
{
	for (size_t i = 0; i <= 2; i++)
	{
			if (graph[i] != 'X' && graph[i] != 'O')
			{
				return graph[i];
			}
	}
}


void MiniMax::copy_broad()
{
	if (miximizing_player == false) {
		empty_cell_check();
		auto broad_copy = new Node(empty_cell_check());
		miximizing_player = true;
		broad_copy->right = new Node(empty_cell_check());
	}
}
#if 1
int MiniMax::min(int best_value, char* worst_value)
{
	return best_value < int(worst_value) ? best_value : int(worst_value);
}

int MiniMax::max(int best_value, char* worst_value)
{
	return best_value > int(worst_value) ? best_value : int(worst_value);
}
#endif

#if 1
int MiniMax::minimax(char board[], bool maximizing_player)
{
	for (char i = 0; i < 8; i++)
	{
		if (i != '_')
		{
			winner = win_condational(win_lose);
			
			if (winner == 1)
			{
				std::cout << minimizing_player << "wins!" << std::endl;
			}
			else if (winner == 0)
			{
				std::cout << "Jeff wins!!";
			}
			else
			{
				break;
			}
		}
	}


	if (maximizing_player == true)
	{
		best_value = -INFINITY;
		for (char i = 0; i < 8; i++) // looping through each empty cell
		{
			if (board[i] == '_')
			{
				board[i] = 'O';
				value = new char(minimax(board, false));
				graph[i] = '_';
				best_value = min(best_value, value);
			}
		}
		return best_value;
	}
	else {
		best_value = +INFINITY;
		// looping through each empty cell 
		for (char i = 0; i < 8; i++) 
		{
			if (board[i] == '_') 
			{
				board[i] = 'X';
				value = new char(minimax(board, true));
				graph[i] = '_';
				best_value = min(best_value, value);
			}
			
		}
		return best_value;
	}
}
#endif





