#include "Input_output.h"

Input_output::Input_output()
{
}

void Input_output::Menu()
{
	std::cout << "Welcome to Tic-Tac-Toe!\n\n";
	std::cout << "What's your name? : ";
	std::cin >> human_player;
	system("CLS");
	std::cout << human_player;
	std::cout << "\n\n ";
}

void Input_output::Print()
{
	while (true) {
		std::cout << "\nPick a row : ";
		std::cin >> row;
		std::cout << "Pick a column : ";
		std::cin >> column;
	}
}
