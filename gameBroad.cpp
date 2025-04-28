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

void gameBroad::gamePlayLoop()//put bool
{
	update();
	while (true) {
		minimizing_player = true;
		
		std::cout << "\n" << player << " pick a row : ";
		std::cin >> input;
		std::cout << "\n";

		graph[input] = 'O';
		if (win_condational(win_lose) == 1 || win_condational(win_lose) == 0)
		{
			break;
		}
		
		minimizing_player = false;
		break;
	}

}

int gameBroad::win_condational(int flag)
{

	if (graph[0, 1, 2] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
	else if (graph[0, 1, 2] == 'O') {

		std::cout << "O wins" << std::endl;
		flag = 0;
	}
	else if (graph[6, 7, 8] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
	else if (graph[6, 7, 8] == 'O') {

		std::cout << "O wins" << std::endl;
		flag = 0;
	}
	else if (graph[0, 3, 6] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
 	else if (graph[0, 3, 6] == 'O')
	{
		std::cout << "O wins" << std::endl;
		flag = 0;
	}
	else if (graph[1, 4, 7] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
	else if (graph[1, 4, 7] == 'O')
	{
		std::cout << "O wins" << std::endl;
		flag = 0;
	}
	else if (graph[2, 5, 8] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
	else if (graph[2, 5, 8] == 'O')
	{
		std::cout << "O wins" << std::endl;
		flag = 0;
	}
	else if (graph[0, 4, 8] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
	else if (graph[0, 4, 8] == 'O')
	{
		std::cout << "O wins" << std::endl;
		flag = 0;
	}
	else if (graph[2, 4, 6] == 'X') {

		std::cout << "X wins" << std::endl;
		flag = 1;
	}
	else if (graph[2, 4, 6] == 'O')
	{
		std::cout << "X wins" << std::endl;
		flag = 0;
	}
	else
	{
		flag = -1;
	}

	return flag;
};



