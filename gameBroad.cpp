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
	std::cin >> minimizing_player;
	std::cout << minimizing_player;
	std::cout << "\n\n";
	
}

void gameBroad::gamePlayLoop()
{
	bool flag = true;
	update();
	while (flag) {
		std::cout << "\n" << minimizing_player << " pick a row : ";
		std::cin >> input;
		std::cout << "\n";

		graph[input] = 'X';
		update();

		break;
	}	
}




