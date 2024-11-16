#include <iostream>
#include <string_view>

enum class animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck
};

constexpr std::string_view getAnimalName(animal Animal)
{
    using enum animal;

    switch (Animal)
    {
    case pig:
        return "pig";
    case chicken:
        return "chicken";
    case goat:
        return "goat";
    case cat:
        return "cat";
    case dog:
        return "dog";
    case duck:
        return "duck";
    default:
        return "???";
    }
}

void printNumberOfLegs(animal Animal)
{

    using enum animal;

    if (Animal == chicken || Animal == duck)
    {
        std::cout << "The " << getAnimalName(Animal) << " has 2 legs\n";
    }
    else if (Animal == pig || Animal == goat || Animal == cat || Animal == dog)
    {
        std::cout << "The " << getAnimalName(Animal) << " has 4 legs\n";
    }
    else
    {
        std::cout << "The " << getAnimalName(Animal) << " has 0 legs\n";
    }
}

int main()
{
    printNumberOfLegs(animal::cat);
    printNumberOfLegs(animal::chicken);
    return 0;
}