#include "Gamebroad.h"

gameBroad::gameBroad()
{
	this->user_row;
	this->user_column;
	this->graph;
	this->human_player;
	this->computer_player;
}

void gameBroad::update() const 
{
	for (size_t rows = 0; rows < 3; rows++) 
	{
		for (size_t columns = 0; columns < 3; columns++)
		{
			std::cout << graph[rows][columns];

			if (columns < 2)
			{
				std::cout << "|"; // column divider
				

			}

		}
		std::cout << "\n";

		if (rows < 2)
		{
			std::cout << "-------" << "\n"; // row divider
		}
	}

}



void gameBroad::Menu()
{	
	std::cout << "Welcome to Tic-Tac-Toe!\n\n";
	std::cout << "What's your name? : ";
	std::cin >> human_player;
	system("CLS");
	std::cout << human_player;
	std::cout << "\n\n ";
	
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

		graph[user_row][user_column] = 'X';

		aiInput();
		
		if (winCondation(flag) == false)
		{
			break;
		}
		
	}
	
}

bool gameBroad::winCondation(bool flag)
{
	
	if (graph[0][0] == 'X' && graph[0][1] == 'X' && graph[0][2] == 'X')
	{
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[1][0] == 'X' && graph[1][1] == 'X' && graph[1][2] == 'X')
	{
		
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[2][0] == 'X' && graph[2][1] == 'X' && graph[2][2] == 'X')
	{
		
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[2][0] == 'X' && graph[1][1] == 'X' && graph[0][2] == 'X')
	{
		
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[2][2] == 'X' && graph[1][1] == 'X' && graph[0][0] == 'X')
	{
		
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[0][0] == 'X' && graph[1][0] == 'X' && graph[2][0] == 'X')
	{
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[0][1] == 'X' && graph[1][1] == 'X' && graph[2][1] == 'X')
	{
		
		std::cout << human_player << " won!";
		return flag = false;
	}
	else if (graph[0][2] == 'X' && graph[1][2] == 'X' && graph[2][2] == 'X')
	{
		
		std::cout << human_player << " won!";
		return flag = false;
	}
	return flag;
}

int gameBroad::aiInput()
{	
	int computer_row = 0;
	int computer_column = 0;

	if (graph[user_row][user_column] == 'X')
	{
		for (computer_row; computer_row <= user_row; computer_row++) { // looping to find the row x is in 

			for (computer_row; computer_column <= user_column; computer_column++) // looping to find the column x is in 
			{}
		}
		if (computer_row == 3)
		{
			--computer_row; 
		}
		if (computer_column == 3)
		{
			--computer_column;
		}
		
	}
	
	graph[computer_row][computer_column] = '0';
		std::cout << "\nJeff choose row: " << computer_row;
		std::cout << "\n";
		std::cout << "Jeff choose column: " << computer_column << "\n\n";
		update();
		
	return 0;
}




