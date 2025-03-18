#include <iostream>

class gameBroad {

	int row, column;
	
	char graph[3][3] = {

		{' ',' ',' '},
		{' ',' ',' '},
		{' ',' ',' '}

	};

public:

	gameBroad();
	void display();
};