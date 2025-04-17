#include "Gamebroad.h"

gameBroad::gameBroad()
{
	this->user_row;
	this->user_column;
	this->graph;
	this->human_player;
	this->computer_player;
	this->human_player2;
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
	std::cout << "Player 1 name : ";
	std::cin >> human_player;
	std::cout << "Player 2 name : ";
	std::cin >> human_player2;
	std::cout << human_player;
	std::cout << "\n\n";
	
}

void gameBroad::gamePlayLoop()
{
	bool flag = true;
	update();
	while (flag) {

		std::cout << "\n" << human_player << " pick a row : ";
		std::cin >> user_row;
		std::cout << "\n";

		graph[user_row] = 'X';
		max.copy_broad();
		update();
		
		break;
		
		
	}
	
}






