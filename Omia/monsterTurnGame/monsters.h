#ifndef MONSTERS_H
#define MONSTERS_H
#include <string>

// Your code here

enum class MonsterType
{
    Dragon,
    Goblin
};

struct monster
{
    MonsterType type;
    int hp{};
    int attack{};
    int defense{};
};

std::string getMonsterType(MonsterType type);

#endif // MONSTERS_H