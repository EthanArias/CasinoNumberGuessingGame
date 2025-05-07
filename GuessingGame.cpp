#include "GuessingGame.h"

GuessingGame::GuessingGame(Player p){
	goal = (rand() % 24) + 1;
	player = p;
}

void GuessingGame::update(){
	goal = (rand() % 24) + 1;
}

bool GuessingGame::check(int n){
	return (n == goal);
}

void GuessingGame::play(){
	bool x = true;
	std::cout << "Welcome to the 'Casino Number Guessing Game'" << std::endl;
	std::cout << "Rules:" << std::endl;
	std::cout << "\t" << "1) You get unlimited guesses." << std::endl;
	std::cout << "\t" << "2) You can only give your answer in positive integers." << std::endl;
	std::cout << "\t" << "3) The number you'll be guessing will be between and include 1 and 24." << std::endl;
	std::cout << "\t" << "4) Every time you guess correctly, you'll recieve $10." << std::endl;
	std::cout << "\t" << "5) At the end of the game (when you select give up), your total $ will be displayed." << std::endl;
	do {
		if (check(player.prompt())) {
			player.win();
			update();
		}
		else {
			std::cout << "Wrong answer!" << std::endl;
			std::cout << "Give up or try again?" << std::endl;
			std::cout << "type 0 to give up. type any other answer to continue." << std::endl;
			char a;
			std::cin >> a;
			if (a == '0') {
				x = false;
			};
		};
	} while (x == true);
	std::cout << "Your total: $" << player.total();
}