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
}