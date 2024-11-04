#include <iostream>
#include <string>

#include "game.h"
#include "monsters.h"

std::ostream &operator<<(std::ostream &out, const monster &m)
{
  out << getMonsterType(m.type) << " has " << m.hp << " hp, " << m.attack
      << " attack, " << m.defense << " defense\n";
  return out;
}

int main()
{

  return 0;
}
