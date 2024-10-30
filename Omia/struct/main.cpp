#include <iostream>

struct monster
{
    int hp{};
    int attack{};
    int defense{};
};

std::ostream &operator<<(std::ostream &out, const monster &m)
{
    out << "Monster has " << m.hp << " hp, " << m.attack << " attack, " << m.defense << " defense\n";
    return out;
}

int main()
{
    monster Dragon{300, 150, 50};
    monster Goblin{};
    Dragon.hp = 300;
    Goblin.hp = 100;

    if (Dragon.hp > Goblin.hp)
    {
        std::cout << "Dragon wins!\n";
    }
    else
    {
        std::cout << "Goblin wins!\n";
    }

    std::cout << Dragon;
}