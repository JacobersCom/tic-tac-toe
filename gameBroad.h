#pragma once 
#include <iostream>

class gameBroad {

public:
	int input;
	std::string minimizing_player;

	char graph[9] = { '_','_','_','_','_','_','_','_','_' };

	
	gameBroad();
	gameBroad(int user_input, std::string player) 
		: input(user_input), minimizing_player(player) {}
	void update() const ;
	void Menu();
	void gamePlayLoop();
	/*bool winCondation(bool flag);*/

};