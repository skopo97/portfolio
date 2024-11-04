#include <iostream>
#include <string>

enum class monsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime
};

struct monster
{
    monsterType type{};
    std::string name{};
    int health{};
};

std::string getMonsterType(monsterType t)
{
    if (t == monsterType::ogre)
        return "Ogre";
    if (t == monsterType::dragon)
        return "Dragon";
    if (t == monsterType::orc)
        return "Orc";
    if (t == monsterType::giant_spider)
        return "Giant Spider";
    if (t == monsterType::slime)
        return "Slime";
    return "Unknown";
}

void printMonster(monster &m)
{
    std::cout << "This " << getMonsterType(m.type) << " is named " << m.name << " and has " << m.health << " health.\n";
}

int main()
{
    monster torg{monsterType::ogre, "Torg", 145};
    monster blurp{monsterType::slime, "Blurp", 23};

    printMonster(torg);
    printMonster(blurp);
}