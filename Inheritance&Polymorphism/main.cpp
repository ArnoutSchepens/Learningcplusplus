
#include <iostream>
#include "include/Daughter.h"
#include "include/Ninja.h"
#include "include/Monster.h"

using namespace std;

int main()
{
//	Mother mother;
//	Daughter daughter;
//	daughter.sayHi();
	
	Ninja ninja;
	Monster monster;
	Enemy* ninjaPtr = &ninja;
	Enemy* monsterPtr = &monster;
	
	ninja.setAttackPower(20);
//	Using the pointer is faster and more efficient
	monsterPtr->setAttackPower(80);
	ninja.attack();
	monster.attack();
}