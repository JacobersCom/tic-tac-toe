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

		std::cout << "\nPick a row : ";
		std::cin >> row;
		std::cout << "Pick a column : ";
		std::cin >> column;

		graph[row][column] = ' X';


		update();
		
		/*if (graph[row][column] == 'X')
		{
			system("CLS");
			std::cout << "Jeff\n\n";
			update();
			std::cout << "\nPick a row : ";
			std::cin >> row;
			std::cout << "Pick a column : ";
			std::cin >> column;

		}*/
		
			
		if (graph[0][0] == 'X' && graph[0][1] == 'X' && graph[0][2] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[1][0] == 'X' && graph[1][1] == 'X' && graph[1][2] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[2][0] == 'X' && graph[2][1] == 'X' && graph[2][2] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[2][0] == 'X' && graph[1][1] == 'X' && graph[0][2] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[2][2] == 'X' && graph[1][1] == 'X' && graph[0][0] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[0][0] == 'X' && graph[1][0] == 'X' && graph[2][0] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[0][1] == 'X' && graph[1][1] == 'X' && graph[2][1] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
		else if (graph[0][2] == 'X' && graph[1][2] == 'X' && graph[2][2] == 'X')
		{
			flag = false;
			std::cout << human_player << " won!";
		}
	}
	
}

int gameBroad::randomNumber()
{
	int min = 0;
	int max = 3;

	std::random_device seed; // seed for random number engine
	std::mt19937 gen(seed()); // Mister tiwist engine

	std::uniform_int_distribution<int> distr(min, max);

	return distr(gen);
}




