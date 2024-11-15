#include <iostream>
#include <string>

class Ball {
 private:
  std::string m_color{"black"};
  double m_radius{10.0};

 public:
  void print() const {
    std::cout << "Ball" << "(" << m_color << ", " << m_radius << ")\n";
  }
  //default
  Ball() { print(); }

  //radius argument
  Ball(double radius) : m_radius{radius} { print(); }

  //color argument
  Ball(std::string color) : m_color{color} { print(); }

  //color and radius argument
  Ball(std::string color, double radius) : m_color{color}, m_radius{radius} {
    print();
  }
};

int main() {

  Ball def{};
  Ball blue{"blue"};
  Ball twenty{20.0};
  Ball blueTwenty{"blue", 20.0};
}