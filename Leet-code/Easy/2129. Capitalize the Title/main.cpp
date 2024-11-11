#include <cctype>
#include <iostream>
#include <string>

std::string capitalizeTitle(std::string title) {

  std::string result = "";
  std::string currentWord = "";
  for (auto i{0}; i < title.size(); ++i) {

    currentWord += title[i];

    if (title[i] == ' ') {
      if (currentWord.length() > 3) {
        currentWord[0] = std::toupper(currentWord[0]);
        for (auto j{1}; j < currentWord.length(); ++j) {
          currentWord[j] = std::tolower(currentWord[j]);
        }
      } else {
        for (auto j{0}; j < currentWord.length(); ++j) {
          currentWord[j] = std::tolower(currentWord[j]);
        }
      }
      result += currentWord;
      currentWord.clear();
    }
  }

  if (currentWord.length() >= 3) {
    currentWord[0] = std::toupper(currentWord[0]);
    for (auto j{1}; j < currentWord.length(); ++j) {
      currentWord[j] = std::tolower(currentWord[j]);
    }
  } else {
    for (auto j{0}; j < currentWord.length(); ++j) {
      currentWord[j] = std::tolower(currentWord[j]);
    }
  }
  result += currentWord;

  return result;
}

int main() {
  std::cout << capitalizeTitle("First leTTeR of EACH Word");
}
