#include "Gamebroad.h"

void gameBroad::update() const 
{
	for (size_t i = 0; i <= 8; i++)
	{
		std::cout << board[i] << " ";
		if ((i +1) % 3 == 0)
		{
			std::cout << std::endl;
		}
	}

}



void gameBroad::Menu()
{	
	std::cout << "Welcome to Tic-Tac-Toe!\n\n";
	std::cout << "Player 1 name : ";
	std::cin >> player;
	std::cout << player;
	std::cout << "\n\n";
	
}

void gameBroad::gamePlayLoop()//put bool
{
	
	while (true) {
		minimizing_player = true;
		
		std::cout << "\n" << player << " pick a row : ";
		std::cin >> input;
		std::cout << "\n";

		board[input] = 'O';
		
		minimizing_player = false;
		break;
	}

}

bool gameBroad::checkWin(char mark) {
	int winPatterns[8][3] = {
		{0,1,2}, {3,4,5}, {6,7,8},
		{0,3,6}, {1,4,7}, {2,5,8},
		{0,4,8}, {2,4,6}
	};

	for (auto& pattern : winPatterns) {
		if (board[pattern[0]] == mark &&
			board[pattern[1]] == mark &&
			board[pattern[2]] == mark) {
			std::cout << mark << " wins!\n";
			return true;
		}
	}

	return false;
}

bool gameBroad::isDraw() {
	for (int i = 0; i < 9; i++) {
		if (board[i] == '_') return false;
	}
	std::cout << "It's a draw!\n";
	return true;
}

