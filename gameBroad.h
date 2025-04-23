#pragma once 
#include <iostream>



class gameBroad {

public:
	int input;
	std::string player;
	bool minimizing_player;
	int win_lose;
	bool flag;
	
	char graph[9] = { '_','_','_','_','_','_','_','_','_' };
	
	gameBroad(){}

	gameBroad(int user_input, std::string player, bool mFlag, int num, bool mPlayer): 
		input(user_input), player(player), flag(mFlag), minimizing_player(mPlayer), win_lose(num){}
	void update() const;
	void Menu();
	void gamePlayLoop();
	int win_condational(int flag);

};