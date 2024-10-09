#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    std::string s = "anagram";
    std::string t = "nagaram";


    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    if(s == t) {
        std::cout << "true";
    }else {
        std::cout << "false";
    }




}

