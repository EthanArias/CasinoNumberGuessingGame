#pragma once
#include <iostream>
class Player
{
public:
	Player();
	int prompt();
	void win();
	int const total();
private:
	int money;
};