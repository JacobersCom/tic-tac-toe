#include <iostream>

class gameBroad {

	int row, column;
	std::string human_player, computer_player;
	
	char graph[3][3] = {

		{' ',' ',' '},
		{' ',' ',' '},
		{' ',' ',' '}

	};

public:
	gameBroad();
	const void update();
	void Menu();
	void gamePlayLoop();
	

};