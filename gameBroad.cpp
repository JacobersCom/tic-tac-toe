#include "Gamebroad.h"

void gameBroad::update() const 
{
	for (size_t i = 0; i <= 8; i++)
	{
		std::cout << graph[i] << " ";
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

void gameBroad::gamePlayLoop()
{
	update();
	while (flag) {
		std::cout << "\n" << player << " pick a row : ";
		std::cin >> input;
		std::cout << "\n";

		graph[input] = 'X';
		update();
		if (win_condational(win_lose) == true)
		{
			break;
		}
		
		minimizing_player = false;
		flag = false;
	}

}

bool gameBroad::win_condational(bool flag )
{
	if (minimizing_player == true)
	{
		if (graph[0] == 'X' && graph[1] == 'X' && graph[2] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}
		if (graph[3] == 'X' && graph[4] == 'X' && graph[5] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}
		if (graph[6] == 'X' && graph[7] == 'X' && graph[8] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}

		//X wins through vertical connection
		if (graph[0] == 'X' && graph[3] == 'X' && graph[6] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}
		if (graph[1] == 'X' && graph[4] == 'X' && graph[7] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}
		if (graph[2] == 'X' && graph[5] == 'X' && graph[8] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}

		//X wins through diagonal connection
		if (graph[0] == 'X' && graph[4] == 'X' && graph[8] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}
		if (graph[2] == 'X' && graph[4] == 'X' && graph[6] == 'X') {

			std::cout << "X wins" << std::endl;
			flag = true;
		}
		return flag;
	}

	if (minimizing_player = false)
	{
		//O win through horizontal connection
		if (graph[0] == 'O' && graph[1] == 'O' && graph[2] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		if (graph[3] == 'O' && graph[4] == 'O' && graph[5] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		if (graph[6] == 'O' && graph[7] == 'O' && graph[8] == 'O') {

			std::cout << "O wins" << std::endl;
		}

		//O wins through vertical connection
		if (graph[0] == 'O' && graph[3] == 'O' && graph[6] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		if (graph[1] == 'O' && graph[4] == 'O' && graph[7] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		if (graph[2] == 'O' && graph[5] == 'O' && graph[8] == 'O') {

			std::cout << "O wins" << std::endl;
		}

		//O wins through diagonal connection
		if (graph[0] == 'O' && graph[4] == 'O' && graph[8] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		if (graph[2] == 'O' && graph[4] == 'O' && graph[6] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		if (graph[0] == 'O' && graph[1] == 'O' && graph[2] == 'O') {

			std::cout << "O wins" << std::endl;
		}
		return flag == false;
	}
}



