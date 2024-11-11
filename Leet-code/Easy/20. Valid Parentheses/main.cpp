#include <iostream>
#include <stack>
#include <string>

bool isValid(std::string s) {
  std::stack<char> queue{};

  //if odd lenght, return false;
  if (s.length() % 2 != 0) {
    return false;
  }

  for (char c : s) {
    char top;

    if (c == '{' || c == '[' || c == '(') {
      queue.push(c);
    }
    if (c == '}' || c == ']' || c == ')') {
      if (queue.size() == 0) {
        return false;
      } else {
        top = queue.top();
        queue.pop();
        if ((top == '{' && c == '}') || (top == '[' && c == ']') ||
            (top == '(' && c == ')')) {
          continue;
        } else {
          return false;
        }
      }
    }
  }

  return queue.empty();
}

int main() {

  std::string s = "((";
  std::cout << isValid(s);
}