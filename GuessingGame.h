#pragma once
#include "Player.h"
#include <cstdlib>
#include <ctime>
class GuessingGame
{
public:
	GuessingGame(Player p);
	void update();
	bool check(int n);
	void play();
private:
	int goal;
	Player player;
};