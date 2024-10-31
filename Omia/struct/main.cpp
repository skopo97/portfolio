#include <iostream>
#include <string>

enum class MonsterType
{
    Dragon,
    Goblin
};

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

struct monster
{
    MonsterType type;
    int hp{};
    int attack{};
    int defense{};
};

std::ostream &operator<<(std::ostream &out, const monster &m)
{
    out << getMonsterType(m.type) << " has " << m.hp << " hp, " << m.attack << " attack, " << m.defense << " defense\n";
    return out;
}

int main()
{
    monster Dragon{MonsterType::Dragon, 300, 150, 100};
    monster Goblin{MonsterType::Goblin, 100, 50, 50};
    std::cout << Dragon;
    std::cout << Goblin;

    std::cout << "Fight!\n";
    std::cout << "Dragon attacks Goblin and dealt " << Dragon.attack << " damage\n";
    Goblin.hp -= Dragon.attack - Goblin.defense;
    std::cout << "Goblin lost " << Dragon.attack - Goblin.defense << " hp\n";

    if (Goblin.hp <= 0)
    {
        std::cout << "Goblin is dead\n";
    }
    else
    {
        std::cout << "Goblin has " << Goblin.hp << " hp left\n";
    }
}