#include "MiniMax.h"

MiniMax::MiniMax()
{
	minimax_player = false;
	score = NULL;
}

//int MiniMax::minimax(Node* node, int depth, bool minimax)
//{
//
//}

char MiniMax::empty_cell_check()
{
	for (size_t i = 0; i <= 2; i++)
	{
		for (size_t j = 0; j <= 2; j++)
		{
			if (broad.graph[i] == '_')
			{
				return broad.graph[i];
			}
		}
	}
}


void MiniMax::copy_broad()
{
	if (minimax_player == true) {
		empty_cell_check();
		auto broad = new Node(empty_cell_check());
	}
}



