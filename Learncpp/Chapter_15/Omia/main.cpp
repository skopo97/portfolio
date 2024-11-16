#include <iostream>
#include "date.h"

class calc {
private:
    int m_value{};

public:
    calc& add(const int value){m_value +=  value; return *this;}
    calc& subtract(const int value){m_value -= value; return *this;}

    int getValue() const {return m_value;}

    void reset(){*this = {};}
};

class setnumber {
private:
    int m_number{};

public:
    setnumber(const int number) : m_number{number}{};
    void setNumber(const int number){this-> m_number = number;}
    int getNumber() {return this->m_number;}

    void print() const {
        std::cout << this->m_number << '\n';
    }

};

int main() {
    setnumber Number1 {1};
    Number1.print();
    Number1.setNumber(5);
    Number1.print();

    int x {Number1.getNumber()};
    std::cout << "Number is : " << x << '\n';

    calc Calc;
    Calc.add(15).subtract(5);
    std::cout << Calc.getValue() << '\n';

    Calc.reset();
    std::cout << Calc.getValue() << '\n';

    const date newDate{20, 8, 1997};
    newDate.print();
    return 0;

}
