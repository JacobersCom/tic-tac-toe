#include <iostream>
#include <random>

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
	void update() const ;
	void Menu();
	void gamePlayLoop();
	int randomNumber();

	

};