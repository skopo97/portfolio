#include <iostream>
#include <sched.h>



void sort2(int &lesser, int &greater)
{
    if (lesser <= greater)
        return;

    std::swap(lesser, greater);
}

int changePointer(int* test){

    *test = 10;
    return *test;
    
}

int changeReference(int& test){
    test = 10;

    return test;
}
int main()


{

    int value{5};
    int* testPointer {&value};
    changePointer(testPointer);
    std::cout << *testPointer << '\n';


    int testReference{5};
    changeReference(testReference);
    std::cout << testReference << '\n';

    int x{7};
    int y{5};
    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y);                        // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y);                        // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}
