#include"MiniMax.h"

char MiniMax::bestIndex(char board[])
{
//	 --- AI moves ---
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
	return board[bestMove] = aiMark;
}

char MiniMax::minimax(char board[],int depth, bool isMaxing)
{

	for (size_t i = 0; i < 8; i++){

//		--- If space is empty ---
		if (board[i] != '_')
		{
//			--- Run winCondational ---

//			--- X wins ---
			if (win_condational(win_lose) == 1)
			{
				score = 1;
			}
//			--- O wins ---
			else if (win_condational(win_lose) == 0)
			{
				score = -1;
			}
//			--- Draw ---
			else if (win_condational(win_lose) == -1) 
			{
				score = 0;
			}
		}
	}

	
	for (size_t i = 0; i < 8; i++)
	{
//		 --- Maximizing player ---
		if (isMaxing)
		{
			int bestScore = -INFINITY;
//			 --- If i is an empty space ---
			if (board[i] == '_')
			{
//			 --- Place ai mark (X) at i ---
				board[i] = aiMark;

				//...
				score = minimax(board, depth+1,false);

				//Reset board space
				board[i] = '_';

				if (score > bestScore)
				{
					bestScore = score;
				}
			}
			return bestScore;
		}
//		--- Minimizing player ---
		else
		{
			int bestScore = INFINITY;

//			--- If there is an empty space in the board ---
			if (board[i] == '_')
			{
//				--- Place a humanMark(O) at i ---
				board[i] = humanMark;

//				...
				score = minimax(board,depth+1,true);

//				--- Reset Board ---
				board[i] = '_';

//				--- Checking if the score has been minimized ---
				if (score < bestScore)
				{
					bestScore = score;
				}
			}
			return bestScore;
		}
	}
	
}

void MiniMax::winCondational(char board[])
{
	for (size_t i = 0; i < 8; i++)
	{
		board[i];
	}
}

char MiniMax::eqaulIndexs(char a, char b, char c)
{
	return a == b && b == c && a != '_';
}
