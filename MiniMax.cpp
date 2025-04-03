#include "MiniMax.h"

MiniMax::MiniMax()
{

}

int MiniMax::minimax(Node* node, int depth, bool minimax)
{
	if (depth = 0 || node->left == nullptr && node->right == nullptr)
	{
		return node->data;
	}
	if (minimax == true)
	{
		score = -INFINITY;
		for(Node it: node)
	}
}



