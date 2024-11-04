#include "game.h"
#include "monsters.h"
#include <iostream>

void chooseYourMonster(monster &chosenMonster)
{
    std::cout << "Choose your monster 1. Dragon 2. goblin\n";
    int choice{};
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "You chose to be a dragon!\n";
        chosenMonster = {MonsterType::Dragon, 300, 150, 100};
        break;
    case 2:
        std::cout << "You chose to be a goblin!\n";
        chosenMonster = {MonsterType::Goblin, 165, 150, 50};
        break;

    default:
        std::cout << "error";
        break;
    }
}

void chooseYourEnemyMonster(monster &enemyMonster)
{
    std::cout << "Choose your enemy monster 1. Dragon 2. goblin\n";
    int choice{};
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        std::cout << "You chose a dragon as your enemy!\n";
        enemyMonster = {MonsterType::Dragon, 300, 150, 100};
        std::cout << "Your enemy has " << enemyMonster.hp << " hp, " << enemyMonster.attack << " attack, " << enemyMonster.defense << " defense\n";
        break;
    case 2:
        std::cout << "You chose a gobling as your enemy!\n";
        enemyMonster = {MonsterType::Goblin, 165, 150, 50};
        std::cout << "Your enemy has " << enemyMonster.hp << " hp, " << enemyMonster.attack << " attack, " << enemyMonster.defense << " defense\n";

        break;

    default:
        std::cout << "error";
        break;
    }
}

void attack(monster &attacker, monster &defender)
{
    int damage{attacker.attack - defender.defense};

    if (damage <= 10)
    {
        damage = 10;
        std::cout << "You inflicted the minimum damage of 10 due to high enemy defense!\n";
    }
    else
    {
        std::cout << "You inflicted " << damage << " damage!\n";
    }

    defender.hp -= damage;
    std::cout << "Enemy now has " << defender.hp << " hp left.\n";
}