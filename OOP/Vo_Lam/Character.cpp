#include "Character.h"
#include "Element.h"

using namespace std;

Character::Character()
{
	level = 0;
	mp = new VH();
}

Character::~Character()
{
}

float Character::SatThuong(Character* p)
{
	float st = atke();
	return st + st * mp->attack(p->gethe()) / 100;
}

Element* Character::gethe()
{
	return mp;
}

void Character::TangEx(float t)
{
	exp += t;
}

