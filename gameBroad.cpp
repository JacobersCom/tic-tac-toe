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
		std::cout << human_player << " pick a column : ";
		std::cin >> user_column;
		std::cout << "\n";

		graph[user_row] = 'X';
		break;
		
		/*if (winCondation(flag) == false)
		{
			break;
		}*/
		
	}
	
}

//bool gameBroad::winCondation(bool flag)
//{
//	
//	if (graph[0][0] == 'X' && graph[0][1] == 'X' && graph[0][2] == 'X')
//	{
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[1][0] == 'X' && graph[1][1] == 'X' && graph[1][2] == 'X')
//	{
//		
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[2][0] == 'X' && graph[2][1] == 'X' && graph[2][2] == 'X')
//	{
//		
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[2][0] == 'X' && graph[1][1] == 'X' && graph[0][2] == 'X')
//	{
//		
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[2][2] == 'X' && graph[1][1] == 'X' && graph[0][0] == 'X')
//	{
//		
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[0][0] == 'X' && graph[1][0] == 'X' && graph[2][0] == 'X')
//	{
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[0][1] == 'X' && graph[1][1] == 'X' && graph[2][1] == 'X')
//	{
//		
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	else if (graph[0][2] == 'X' && graph[1][2] == 'X' && graph[2][2] == 'X')
//	{
//		
//		std::cout << human_player << " won!";
//		return flag = false;
//	}
//	return flag;
//}





