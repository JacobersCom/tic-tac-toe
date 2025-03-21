#include "Gamebroad.h"

gameBroad::gameBroad()
{
	this->row;
	this->column;
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
		std::cin >> row;
		std::cout << human_player << " pick a column : ";
		std::cin >> column;
		std::cout << "\n";

		graph[row][column] = ' X';

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
	std::random_device seed; // seed for random number engine
	std::mt19937 gen(seed()); // Mister tiwist engine

	std::uniform_int_distribution<int> distr(0, 2);

	int randomInput1 = distr(gen);
	int randomInput2 = distr(gen);
	
	if (graph[row][column] == 'X')
	{
		for (int i = 0; i <= row; i++) {
			
			for (int j = 0; j <= column; j++)
			{
				if (i == row && j == column)
				{
					if (i != 2 || j != 2)
					{
						graph[++i][++j] = 'O';
					}
					else
					{
						graph[--i][--j] = 'O';
					}
				}
			}
		}

		std::cout << "\nJeff choose row: " << ++row;
		std::cout << "\n";
		std::cout << "Jeff choose column: " << ++column << "\n\n";
		update();
	}
	return 0;
}




