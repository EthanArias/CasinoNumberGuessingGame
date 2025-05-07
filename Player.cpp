#include "Player.h"

Player::Player(){
	money = 0;
}

int Player::prompt(){
	std::cout << "Your guess: ";
	int guess;
	std::cin >> guess;
	return guess;
}

void Player::win(){
	money+=10;
	std::cout << "You won!" << std::endl;
	std::cout << "Your total: " << money << std::endl;
}

int const Player::total()
{
	return money;
}
