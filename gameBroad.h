#pragma once 
#include <iostream>



class gameBroad {

public:
	int input;
	std::string player;
	bool minimizing_player;
	int win_lose;
	bool retur;
	
	char board[9] = { '_','_','_','_','_','_','_','_','_' };
	
	gameBroad(){}

	gameBroad(int user_input, std::string player, bool mFlag, int num, bool mPlayer): 
		input(user_input), player(player), retur(mFlag), minimizing_player(mPlayer), win_lose(num){}
	void update() const;
	void Menu();
	void gamePlayLoop();
	bool win_condational(char board[]);

};