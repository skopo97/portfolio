#include <iostream>
#include <string_view>
namespace monster{
    enum class monsterType{
        orc,
        goblin,
        troll,
        ogre,
        skeleton

    };
}

constexpr std::string_view getMonsterType(monster::monsterType Type){

    using enum monster::monsterType;

    switch(Type){
        case orc: return "orc";
        case goblin: return "goblin";
        case troll: return "troll";
        case ogre: return "ogre";
        case skeleton: return "skeleton";
        default: return "???";

    }


}

//Overload << operator for monsterType

std::ostream& operator<<(std::ostream& out, monster::monsterType Type){
    out << getMonsterType(Type);
    return out;
}

int main()
{
    constexpr monster::monsterType monster{monster::monsterType::orc};
    std::cout << "The monster is a " << monster << '\n';

    return 0;
}