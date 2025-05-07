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

void Player::win(int n){
	money += n;
}
