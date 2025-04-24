#include "MiniMax.h"

char MiniMax::empty_cell_check()
{
	for (size_t i = 0; i <= 2; i++)
	{
			if (graph[i] == '_')
			{
				std::cout << graph[i];
			}
	}
	return graph[8];
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

int MiniMax::min(int best_value, char* value)
{
	return best_value < value ? best_value : value;
}


#if 1
char* MiniMax::minimax(char board[], bool maximizing_player)
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
		char i;
		for (i = 0; i < 8; i++)
		{
			if (board[i] == '_')
			{
				board[i] = 'O';
			}
			graph[i] = '_';
		}
		value = minimax(board, maximizing_player);
		maximizing_player = false;
		best_value = min(best_value, value);
		return
	}
	else
	{
		best_value = +INFINITY;
		char i;
		for (i = 0; i < 8; i++)
		{
			if (board[i] == '_')
			{
				board[i] = 'X';
			}
			
			graph[i] = '_';
		}
		value = minimax(board, maximizing_player);
		minimizing_player = false;
		return minimax(board, miximizing_player);
	}
}
#endif





