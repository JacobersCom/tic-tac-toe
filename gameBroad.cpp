#include "Gamebroad.h"

void gameBroad::update() const 
{
	for (size_t i = 0; i <= 8; i++)
	{
		std::cout << board[i] << " ";
		if ((i +1) % 3 == 0)
		{
			std::cout << std::endl;
		}
	}

}



void gameBroad::Menu()
{	
	std::cout << "Welcome to Tic-Tac-Toe!\n\n";
	std::cout << "Player 1 name : ";
	std::cin >> player;
	std::cout << player;
	std::cout << "\n\n";
	
}

void gameBroad::gamePlayLoop()//put bool
{
	
	while (true) {
		minimizing_player = true;
		
		std::cout << "\n" << player << " pick a row : ";
		std::cin >> input;
		std::cout << "\n";

		board[input] = 'O';
		
		minimizing_player = false;
		break;
	}

}
#if 0
bool gameBroad::win_condational(char board[])
{
    
    if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
    if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
    if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
       

    //X wins through vertical connection
    if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
    if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
    if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
    std::cout << "X wins" << std::endl;
        
    //X wins through diagonal connection
    if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') {
        std::cout << "O wins" << std::endl;
        return true;
    }
    else if (board[6, 7, 8] == 'X') {

        std::cout << "X wins" << std::endl;
        return true;
    }
    if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') {
        std::cout << "X wins" << std::endl;
        return true;
    }
    else if (board[6, 7, 8] == 'O') {

        std::cout << "X wins" << std::endl;
        return true;
    }
  
    //O win through horizontal connection
    if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O') {
        std::cout << "O wins" << std::endl;
        return false;
    }
    if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') {

        std::cout << "O wins" << std::endl;
        return false;
    }
    if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') {

        std::cout << "O wins" << std::endl;
        return false;
    }

    //O wins through vertical connection
    if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') {

        std::cout << "O wins" << std::endl;
        return false;
    }
    if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') {

        std::cout << "O wins" << std::endl;
        return false;
    }
    if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') {

        std::cout << "O wins" << std::endl;
        return false;
    }
    if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')
    {
        std::cout << "O wins" << std::endl;
        return false;
    }
    if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O')
    {
        std::cout << "O wins" << std::endl;
        return false;
    }
}
#endif


