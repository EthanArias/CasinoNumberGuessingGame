#include "GuessingGame.h"

int main() {
	// Setup
	Player user;
	GuessingGame game(user);
	srand(time(0));

	// Gameplay loop
	game.play();
}