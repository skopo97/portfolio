#include <iostream>
#include <string>
#include <string_view>

class Ball {
 private:
  std::string m_color{""};
  double m_radius{};

 public:
  Ball(std::string_view color, double radius)
      : m_color{color}, m_radius{radius} {}

  const std::string& getColor() const { return m_color; }
  double getRadius() const { return m_radius; }
};
void print(const Ball& ball) {
  std::cout << "Ball " << "(" << ball.getColor() << ", " << ball.getRadius()
            << ")\n";
}

int main() {

  Ball blue{"blue", 10.0};
  print(blue);

  Ball red{"red", 12.0};
  print(blue);

  return 0;
}
