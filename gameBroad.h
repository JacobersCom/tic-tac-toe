#pragma once 
#include <iostream>

class MiniMax;

class gameBroad {

public:
	int user_row, user_column = 0;
	std::string human_player, computer_player, human_player2;
	
	char graph[9] = { '_','_','_','_','_','_','_','_','_' };
	MiniMax max;
	
	gameBroad();
	void update() const ;
	void Menu();
	void gamePlayLoop();
	

};