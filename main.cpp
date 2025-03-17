#include <iostream>
#include "gameBroad.h"

gameBroad obj;

int main() {
	std::string playerX;
	std::string playerO;

	std::string row;
	std::string column;

	std::cout << "Welcome to Tic-Tac-Toe!\n\n";
	std::cout << "What's your name? : ";
	std::cin >> playerX;
	system("CLS");
	std::cout << playerX;
	std::cout << "\n\n ";

	obj.display();

	while (true) {
		std::cout << "\nPick a row : ";
		std::cin >> row;
		std::cout << "Pick a column : ";
		std::cin >> column;
	}



}

