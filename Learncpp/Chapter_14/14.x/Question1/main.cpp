#include <cmath>
#include <iostream>

class Point2d {
 private:
  double m_x{0.0};
  double m_y{0.0};

 public:
  Point2d() = default;
  Point2d(const double x, const double y) : m_x{x}, m_y{y} {};

  void print() const { std::cout << "Point2d(" << m_x << ", " << m_y << ")\n"; }

  double distanceTo(const Point2d& otherPoint) const {
    return {std::sqrt((m_x - otherPoint.m_x) * (m_x - otherPoint.m_x) +
                      (m_y - otherPoint.m_y) * (m_y - otherPoint.m_y))};
  }
};

int main() {
  const Point2d first{};
  const Point2d second{3.0, 4.0};
  //Point2d third{4.0};

  first.print();
  second.print();

  std::cout << "Distance between two points: " << first.distanceTo(second)
            << '\n';
}
