#include "game.h"
#include "monsters.h"

#include <iostream>
#include <string>

std::ostream &operator<<(std::ostream &out, const monster &m)
{
  out << getMonsterType(m.type) << " has " << m.hp << " hp, " << m.attack
      << " attack, " << m.defense << " defense\n";
  return out;
}

int main()
{
  monster myMonster;
  chooseYourMonster(myMonster);

  monster enemyMonster;
  chooseYourEnemyMonster(enemyMonster);

  while (myMonster.hp >= 0 || enemyMonster.hp >= 0)
  {
    std::cout << "You go first! Choose your action. 1. Attack for " << myMonster.attack << " or defend for " << myMonster.defense << '\n';
    int action{};
    std::cin >> action;

    if (action == 1)
    {
      attack(myMonster, enemyMonster);
      std::cout << "You attacked! Enemy has " << enemyMonster.hp << " hp left!\n";
    }
    else
    {
      std::cout << "You defended!\n";
    }
  }
  return 0;
}
