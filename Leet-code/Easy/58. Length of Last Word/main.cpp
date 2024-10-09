#include <iostream>
#include <string>
#include <algorithm>


int lengthOfLastWord(std::string s) {

    int count{};
    std::string reverse = std::move(s);
    std::reverse(reverse.begin(), reverse.end());

    for(auto c : reverse)
    {
        if(c != ' ')
        {
            count++;
        }
        else if (count > 0)
        {
            break;
        }
    }


    return count;
}

int main()
{
    std::string s;
    std::cout << "s = ";
    std::getline(std::cin, s);

    std::cout << lengthOfLastWord(s);

    return 0;
}
