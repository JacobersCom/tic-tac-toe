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


#if 1
void MiniMax::minimax(char board[9], bool maximizing_player)
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
		char i;
		for (i = 0; i < 8; i++)
		{
			if (board[i] == '_')
			{
				board[i] = 'O';
			}
			graph[i] = '_';
		}
		decltype(value) n = minimax(board, maximizing_player);
		maximizing_player = false;
		return minimax(board, maximizing_player);
	}
	else
	{
		char i;
		for (i = 0; i < 8; i++)
		{
			if (board[i] == '_')
			{
				board[i] = 'X';
			}
			
			graph[i] = '_';
		}
		return minimax(board, miximizing_player);
	}
}
#endif





