#include "monsters.h"
#include <string>
#include <iostream>

std::string getMonsterType(MonsterType type)
{
    if (type == MonsterType::Dragon)
    {
        return "Dragon";
    }
    else if (type == MonsterType::Goblin)
    {
        return "Goblin";
    }
    else
    {
        return "Unknown";
    }
}

void takeDamage(monster &m, int damage)
{
    m.hp -= damage;
    std::cout << getMonsterType(m.type) << " lost " << damage << " hp and now has " << m.hp << " hp\n";
}