#include "Player.h"
#include <iostream>

Player::Player() {
	
	X = 0;
	Y = 0;
	fuel = 400;
	max_health = 100;

}

//Player::Player(const char* name) {
//
//}

Player::Player(int a_max_fuel, int a_max_health) {
	
	X = 0;
	Y = 0;
	fuel = a_max_fuel;
	max_health = a_max_health;

}

Player::Player(float x, float y)
{

}

int main()
{
	Player p1(100, 100);  //a -Which constructor this uses
	Player p2(25.f, 16.f); //b
	//Player p3(p1); //c
	//Player p4("Jerry"); //d
	Player p5; //e

	
}