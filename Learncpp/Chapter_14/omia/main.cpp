#include <iostream>
#include <string>
#include <string_view>

class IntPair {
 private:
  int m_x{};
  int m_y{};

 public:
  //default constructor
  IntPair(int x, int y) : m_x{x}, m_y{y} {}
  int x() const { return m_x; }
  int y() const { return m_y; }

  //copy constructor
  IntPair(const IntPair& intpair) : m_x{intpair.m_x}, m_y{intpair.m_y} {
    std::cout << "Copy constructor called \n";
  }
  void print() const { std::cout << "(" << m_x << ", " << m_y << ")\n"; }
};
void print(IntPair p) {
  std::cout << "(" << p.x() << ", " << p.y() << ")\n";
}

IntPair ret1() {
  IntPair p{3, 4};
  return p;  // returns temporary object (initialized using p)
}

// Case 2: Create temporary IntPair and return
IntPair ret2() {
  return IntPair{
      5,
      6};  // returns temporary object (initialized using another temporary object)
}

// Case 3: implicitly convert { 7, 8 } to IntPair and return
IntPair ret3() {
  return {
      7,
      8};  // returns temporary object (initialized using another temporary object)
}

void printValue(int value) {
  std::cout << value << '\n';
}

class number {
 private:
  int m_x{};

 public:
  //constructor.
  explicit number(int x) : m_x{x} {
    std::cout << "Number(" << x << ") constructed\n";
  }
  //setter. Molemmat toimii
  void setX(int x) { m_x = x; }
  bool isEqual(const number& number2) const {
    if (this->m_x == number2.m_x) {
      return true;
    } else {
      return false;
    }
  }

  void print() const { std::cout << "Number is : " << m_x << '\n'; }
};

class employeePrivate {
 private:
  // These members are private, so they are not accessible from outside the class
  int m_id{};
  std::string m_name{};

 public:
  // This constructor is public, so it can be used by anyone
  employeePrivate(int id, const std::string& name) : m_id{id}, m_name{name} {}

  void print() const { std::cout << m_id << ": " << m_name << '\n'; }
};

class employeePublic {
 public:
  int id{};
  std::string m_name{};
  void likes(const employeePublic& employeePublic) const {
    std::cout << m_name << " likes " << employeePublic.m_name << '\n';
  }

  void likes(std::string_view prefix) const {
    std::cout << m_name << " likes " << prefix << '\n';
  }
};

int main() {
  employeePublic joe{1, "Joe"};
  employeePublic frank{2, "Frank"};
  joe.likes(frank);
  joe.likes("Programming");

  employeePrivate joePrivate{1, "Joe"};
  joePrivate.print();

  number Number1{5};
  //Number1.setX(5);
  number Number2{10};
  //Number2.setX(10);

  std::cout << "Number 1 and number 2 "
            << (Number1.isEqual(Number2) ? "" : " not") << " equal\n";

  printValue(5 + 3);

  print(ret1());
  print(ret2());
  print(ret3());

  //Copy constructor
  number number1Copy{Number1};
  number1Copy.print();

  IntPair IntPair1{5, 3};
  IntPair fCopy{IntPair1};  //Copy consturcotr called here

  std::cout << "Default constructor";
  IntPair1.print();
  std::cout << "Copy constructor";
  fCopy.print();

  return 0;
}