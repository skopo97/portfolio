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
