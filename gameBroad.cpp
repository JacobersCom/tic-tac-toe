#include "Gamebroad.h"

gameBroad::gameBroad()
{
	this->graph;
}

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
	std::cout << "Player name : ";
	std::cin >> minimizing_player;
	std::cout << minimizing_player;
	std::cout << "\n\n";
	
}

void gameBroad::gamePlayLoop()
{
	bool flag = true;
	update();
	while (flag) {

<<<<<<< HEAD
		std::cout << "\n" << minimizing_player << " pick a row : ";
		std::cin >> input;
		std::cout << "\n";

		graph[input] = 'X';
		update();
		
		//break;
=======
		std::cout << "\n" << human_player << " pick a row : ";
		std::cin >> user_row;
		std::cout << "\n";

		graph[user_row] = 'X';
		max.copy_broad();
		update();
		
		break;
		
>>>>>>> MiniMax
		
	}
	
}

<<<<<<< HEAD
=======

>>>>>>> MiniMax




