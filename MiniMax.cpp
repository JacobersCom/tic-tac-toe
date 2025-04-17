#include "MiniMax.h"

MiniMax::MiniMax()
{
	minimax_player = false;
	score = NULL;
}

char MiniMax::empty_cell_check()
{
	for (size_t i = 0; i <= 2; i++)
	{
		if (broad.graph[i] == '_')
		{
			return broad.graph[i];
		}
	}
	return '1';
}


void MiniMax::copy_broad()
{
	if (minimax_player == true) {
		empty_cell_check();
		auto broad_copy = new Node(empty_cell_check());
		minimax_player = false;
		broad_copy->right = new Node(empty_cell_check());
	}
}

void MiniMax::win_condational()
{
	//X wins through horizontal connection
	if (broad.graph[0] == 'X' && broad.graph[1] == 'X' && broad.graph[2] == 'X') {
		
		std::cout << "X wins" << std::endl;
	}
	if (broad.graph[3] == 'X' && broad.graph[4] == 'X' && broad.graph[5] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (broad.graph[6] == 'X' && broad.graph[7] == 'X' && broad.graph[8] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	
	//X wins through vertical connection
	if (broad.graph[0] == 'X' && broad.graph[3] == 'X' && broad.graph[6] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (broad.graph[1] == 'X' && broad.graph[4] == 'X' && broad.graph[7] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (broad.graph[2] == 'X' && broad.graph[5] == 'X' && broad.graph[8] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	
	//X wins through diagonal connection
	if (broad.graph[0] == 'X' && broad.graph[4] == 'X' && broad.graph[8] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (broad.graph[2] == 'X' && broad.graph[4] == 'X' && broad.graph[6] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	
	//O win through horizontal connection
	if (broad.graph[0] == 'O' && broad.graph[1] == 'O' && broad.graph[2] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (broad.graph[3] == 'O' && broad.graph[4] == 'O' && broad.graph[5] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (broad.graph[6] == 'O' && broad.graph[7] == 'O' && broad.graph[8] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	
	//O wins through vertical connection
	if (broad.graph[0] == 'O' && broad.graph[3] == 'O' && broad.graph[6] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (broad.graph[1] == 'O' && broad.graph[4] == 'O' && broad.graph[7] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (broad.graph[2] == 'O' && broad.graph[5] == 'O' && broad.graph[8] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	
	//O wins through diagonal connection
	if (broad.graph[0] == 'O' && broad.graph[4] == 'O' && broad.graph[8] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (broad.graph[2] == 'O' && broad.graph[4] == 'O' && broad.graph[6] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (broad.graph[0] == 'O' && broad.graph[1] == 'O' && broad.graph[2] == 'O') {

		std::cout << "O wins" << std::endl;
	}
}



