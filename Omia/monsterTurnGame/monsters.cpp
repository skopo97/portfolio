#include "monsters.h"
#include <iostream>
#include <string>

std::string getMonsterType(MonsterType type) {
  if (type == MonsterType::Dragon) {
    return "Dragon";
  } else if (type == MonsterType::Goblin) {
    return "Goblin";
  } else {
    return "Unknown";
  }
}
