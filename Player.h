#pragma once
#include <iostream>
class Player
{
public:
	Player();
	int prompt();
	void win(int n);
private:
	int money;
};