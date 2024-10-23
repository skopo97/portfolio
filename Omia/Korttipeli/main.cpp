#include <iostream>
#include <string>
#include <vector>
#include "random.h"

int64_t generateRandom();

int64_t generateRandom()
{

    int64_t random = Random::get(0, 51);
    return random;
}

std::vector<std::string> createDeck()
{
    std::vector<std::string> suits = {"Spades", "Clubs", "Diamonds", "Hearts"};
    std::vector<std::string> ranks = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                                      "Jack", "Queen", "King", "Ace"};

    std::vector<std::string> deck;

    for (const auto &suit : suits)
    {
        for (const auto &rank : ranks)
        {
            deck.push_back(rank + " of " + suit);
        }
    }

    return deck;
}

std::string drawCard(std::vector<std::string> &deck)
{

    int64_t card{generateRandom()};
    std::string drawnCard = deck[card];
    deck.erase(deck.begin() + card);
    return drawnCard;
}

int main()
{
    std::vector<std::string> deck = createDeck();
    std::vector<std::string> hand;

    std::cout << "Welcome to poker, drawing your hand... please wait.\n";

    for (int i{0}; i < 5; ++i)
    {

        std::string card = drawCard(deck);

        hand.push_back(card);
    }

    std::cout << "Displaying your hand.\n";
    for (auto i : hand)
    {
        std::cout << i << '\n';
    }
}
