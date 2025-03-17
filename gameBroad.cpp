#include "Gamebroad.h"

gameBroad::gameBroad()
{}

void gameBroad::display()
{
	char graph[3][3] = {

		{' ',' ',' '},
		{' ',' ',' '},
		{' ',' ',' '}

	};

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
