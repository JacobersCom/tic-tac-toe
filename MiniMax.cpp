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

void MiniMax::minimax(char board[9], bool maximizing_player)
{
	for (char i = 0; i < 8; i++)
	{
		if (i != '_')
		{
			std::cout << "Draw, no one wins!" << std::endl;
		}
		else
		{
			win_condational(win_lose);
			return;
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
			minimax(board, maximizing_player); // return the current broad state
			graph[i] = '_';
		}
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
			minimax(board, miximizing_player); // return the current broad state
			graph[i] = '_';
		}
		return minimax(board, miximizing_player);
	}
}





