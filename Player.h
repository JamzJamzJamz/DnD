#ifndef PLAYER_H
#define PLAYER_H
#include "race.h"
#include "Char_Class.h"


class Player
{
private:
	race cuRace;
	Char_Class cuClass;

public:
	Player();
	~Player();
};

#endif

