#include"MiniMax.h"

int MiniMax::bestIndex(char board[])
{
	int bestScore = -INFINITY;
	for (size_t i = 0; i < 8; i++)
	{
		if (board[i] == '_')
		{
			board[i] = aiMark;
			score = minimax(board, 0, true);
			board[i] = '_';
			if (score > bestScore)
			{
				bestScore = score;
				bestMove = i;
			}
		}
	}
	return bestMove;
}

int MiniMax::minimax(char board[],int depth, bool isMaxing)
{
	if (isMaxing) {

		int bestScore = -INFINITY;
		
		for (size_t i = 0; i <= 8; i++)
		{
			if (board[i] == '_')
			{
				board[i] = aiMark;

				score = minimax(board, depth + 1, false);

				board[i] = '_';
				bestScore = std::max(score, bestScore);
			}
		}
		return bestScore;
	}
	else 
	{
		int bestScore = INFINITY;

		for (size_t i = 0; i <= 8; i++)
		{
			if (board[i] == '_')
			{
				board[i] = humanMark;

				score = minimax(board, depth + 1, true);

				board[i] = '_';

				bestScore = std::min(score, bestScore);
			}
		}
		return bestScore;

	}
}

char MiniMax::equals3(char a, char b, char c)
{
	return a == b && b == c && a != '_';
}

void MiniMax::winCondational(char board[])
{
	for (size_t i = 0; i <= 8; i++)
	{

		if (equals3(board[0], board[1], board[2] == 'O'))
		{
			std::cout << "O wins";
		}
		else if (equals3(board[i], board[i], board[i] == 'X'))
		{
			std::cout << "X wins";
		}
		else if (board[i] != '_') 
		{
			openSpace++;
			if(openSpace == 8)
			{
				std::cout << "Tie!";
			}
		}
	}
}

