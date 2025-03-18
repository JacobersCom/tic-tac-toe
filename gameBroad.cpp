#include "Gamebroad.h"

gameBroad::gameBroad()
{
	this->row;
	this->column;
	this->graph;
}

void gameBroad::display()
{
	for (size_t rows = 0; rows < 3; rows++) 
	{
		for (size_t columns = 0; columns < 3; columns++)
		{
			std::cout << graph[rows][columns];

			if (columns < 2)
			{
				std::cout << " |"; // column divider

			}

		}
		std::cout << "\n";

		if (rows < 2)
		{
			std::cout << "--------" << "\n"; // row divider
		}
	}

	while (true) {
		
		std::cout << "\nPick a row : ";
		std::cin >> row;
		std::cout << "Pick a column : ";
		std::cin >> column;
		
		graph[row][column] = ' X';
			
		for (size_t rows = 0; rows < 3; rows++)
		{
			for (size_t columns = 0; columns < 3; columns++)
			{
				std::cout << graph[rows][columns];

				if (columns < 2)
				{
					std::cout << " |"; // column divider

				}

			}
			std::cout << "\n";

			if (rows < 2)
			{
				std::cout << "--------" << "\n"; // row divider
			}
		}
	
	}
}


