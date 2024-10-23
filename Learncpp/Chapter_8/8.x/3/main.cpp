#include <iostream>
#include <limits>
#include <string>
#include "random.h"

void playAgain();
void game();
bool guess(int randomNumber, int &guessCount);
void ignoreLine();

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int generateRandom()
{
    int randomNumber = Random::get(1, 100);
    return randomNumber;
}

void game()
{
    int guessCount{1};
    int randomNumber = generateRandom();
    int attempts{1};
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tried to guess what it is. \n";

    while (attempts <= 7)
    {
        if (guess(randomNumber, guessCount))
        {
            break;
        }
        ++attempts;
    }

    if (attempts > 7)
    {
        std::cout << "Sorry, you lose. The correct number was " << randomNumber << '.';
        attempts = {1};
        playAgain();
    }
}

bool guess(int randomNumber, int &guessCount)
{
    int min{1};
    int max{100};
    std::cout << "Guess #" << guessCount << ": ";
    int guess{};

    while (true)
    {
        std::cin >> guess;

        if (std::cin.fail())
        {
            std::cin.clear();
            ignoreLine();
            std::cout << "Invalid input. Please enter an integer: ";
            continue;
        }
        else if (guess < min || guess > max)
        {
            std::cin.clear();
            ignoreLine();
            std::cout << "Please enter a number between 1-100: ";
            continue;
        }

        break;
    }

    if (guess < randomNumber)
    {
        std::cout << "Your guess is too low\n";
    }
    else if (guess > randomNumber)
    {
        std::cout << "Your guess is too high\n";
    }
    else
    {
        std::cout << "Correct! You Win!\n";
        playAgain();
        return true;
    }

    ++guessCount;
    return false;
}

void playAgain()
{

    while (true)
    {
        std::cout << "Would you like to play again? (y/n)?: ";
        char c{};
        std::cin >> c;

        if (c == 'n')
        {
            std::cout << "Thank you for playing.";
            std::exit(0);
        }
        else if (c == 'y')
        {
            game();
        }
    }
}

int main()
{
    game();

    return 0;

    // std::cout << Random::get(1, 6);
}
