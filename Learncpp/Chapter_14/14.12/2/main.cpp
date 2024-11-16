#include <iostream>
#include <string>
#include <string_view>

class Ball {
 private:
  std::string m_color{"black"};
  double m_radius{10.0};

 public:
  void print() const {
    std::cout << "Ball" << "(" << m_color << ", " << m_radius << ")\n";
  }

  explicit Ball(const double radius) : Ball{"black", radius} {}

  explicit Ball(std::string color = "black", const double radius = 10.0)
      : m_color{color}, m_radius{radius} {
    print();
  }
};

int main() {

  Ball def{};
  Ball blue{"blue"};
  Ball twenty{20.0};
  Ball blueTwenty{"blue", 20.0};
}