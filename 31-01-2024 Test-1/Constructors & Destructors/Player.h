#pragma once
class Player
{
public:
	Player();
	//Player(const char* name);
	Player(int a_max_fuel, int a_max_health);
	Player(float x, float y);
	//Player(Player& a_player);

	float X, Y;
	int fuel;
	int max_health;
	//char name[64];
};

