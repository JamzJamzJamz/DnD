#include "Player.h"
#include <iostream>
#include "race.h"
#include "Char_Class.h"

using namespace std;

Player::Player()
{
	int choice = 0;
	cout << "What race do you want to be? (Press the number next to the corresponding race)" << endl << "1. Dwarf \n2. Elf \n3. Gnome \n4. Human \n5. Halfling \n";
	cin >> choice;
	switch (choice) {
		case 1:
			cuRace = Dwarf;
			break;
		case 2:
			cuRace = Elf;
			break;
		case 3:
			cuRace = Gnome;
			break;
		case 4:
			cuRace = Human;
			break;
		case 5:
			cuRace = Halfling;
			break;
	}

}


Player::~Player()
{
}
