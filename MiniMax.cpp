#include "MiniMax.h"

char MiniMax::empty_cell_check()
{
	for (size_t i = 0; i <= 2; i++)
	{
			if (graph[i] == '_')
			{
				return graph[i];
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
	if (graph[0] == 'X' && graph[1] == 'X' && graph[2] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (graph[3] == 'X' && graph[4] == 'X' && graph[5] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (graph[6] == 'X' && graph[7] == 'X' && graph[8] == 'X') {

		std::cout << "X wins" << std::endl;
	}

	//X wins through vertical connection
	if (graph[0] == 'X' && graph[3] == 'X' && graph[6] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if (graph[1] == 'X' && graph[4] == 'X' && graph[7] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if ( graph[2] == 'X' &&  graph[5] == 'X' &&  graph[8] == 'X') {

		std::cout << "X wins" << std::endl;
	}

	//X wins through diagonal connection
	if ( graph[0] == 'X' &&  graph[4] == 'X' &&  graph[8] == 'X') {

		std::cout << "X wins" << std::endl;
	}
	if ( graph[2] == 'X' &&  graph[4] == 'X' &&  graph[6] == 'X') {

		std::cout << "X wins" << std::endl;
	}

	//O win through horizontal connection
	if ( graph[0] == 'O' &&  graph[1] == 'O' &&  graph[2] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if ( graph[3] == 'O' &&  graph[4] == 'O' &&  graph[5] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if ( graph[6] == 'O' &&  graph[7] == 'O' &&  graph[8] == 'O') {

		std::cout << "O wins" << std::endl;
	}

	//O wins through vertical connection
	if (  graph[0] == 'O' &&   graph[3] == 'O' &&   graph[6] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (  graph[1] == 'O' &&   graph[4] == 'O' &&   graph[7] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (  graph[2] == 'O' &&   graph[5] == 'O' &&   graph[8] == 'O') {

		std::cout << "O wins" << std::endl;
	}

	//O wins through diagonal connection
	if (  graph[0] == 'O' &&   graph[4] == 'O' &&   graph[8] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (  graph[2] == 'O' &&   graph[4] == 'O' &&   graph[6] == 'O') {

		std::cout << "O wins" << std::endl;
	}
	if (  graph[0] == 'O' &&   graph[1] == 'O' &&   graph[2] == 'O') {

		std::cout << "O wins" << std::endl;
	}
}


