#pragma once 
#include <iostream>



class gameBroad {

public:
	int input;
	std::string player;
	bool minimizing_player;
	bool win_lose;
	bool flag;
	
	char graph[9] = { '_','_','_','_','_','_','_','_','_' };
	
	gameBroad(){}

	gameBroad(int user_input, std::string player): input(user_input), player(player), win_lose(false), flag(true), minimizing_player(true){}
	void update() const;
	void Menu();
	void gamePlayLoop();
	bool win_condational(bool flag);

};