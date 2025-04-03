#include <iostream>
#include <random>

class gameBroad {

public:
	int user_row, user_column = 0;
	std::string human_player, computer_player, human_player2;
	
	char graph[3][3] = {

		{'_','_','_'},
		{'_','_','_'},
		{'_','_','_'}

	};

	
	gameBroad();
	void update() const ;
	void Menu();
	void gamePlayLoop();
	bool winCondation(bool flag);

};