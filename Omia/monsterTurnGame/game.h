#ifndef GAME_H
#define GAME_H
#include "monsters.h"

// Your declarations here

void chooseYourMonster(monster &chosenMonster);
void chooseYourEnemyMonster(monster &enemyMonster);

void attack(monster &attacker, monster &defender);

#endif // GAME_H