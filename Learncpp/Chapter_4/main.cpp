#include <iostream>
#include <vector>

int main()
{

    //booleans

    bool x {}; //default value is false
    std::cout << "Enter a boolean value: ";
    std::cin >> std::boolalpha; //allow to use true or false instead of 1 or 0
    std::cin >> x;
    std::cout << std::boolalpha;
    std::cout << "You entered: " << x << std::endl;



    return 0;

}