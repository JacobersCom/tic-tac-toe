#include <iostream>
#include <random>

class gameBroad {

public:
	int row, column = 0;
	std::string human_player, computer_player;
	
	char graph[3][3] = {

		{' ',' ',' '},
		{' ',' ',' '},
		{' ',' ',' '}

	};

	
	gameBroad();
	void update() const ;
	void Menu();
	void gamePlayLoop();
	bool winCondation(bool flag);
	int* randomNumber();
	int aiInput();

	

};