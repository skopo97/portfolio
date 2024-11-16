#include <iostream>

struct Advert {
  int count{};
  int clicked{};
  double earned{};
};

int getAdCount() {
  std::cout << "Enter the number of ads watched: ";
  int count{};
  std::cin >> count;
  return count;
}

int getAdClicks() {

  std::cout << "Enter the number of ads clicked: ";
  int clicked{};
  std::cin >> clicked;
  return clicked;
}

double getAverageEarned() {
  std::cout << "Enter the average earned per ad: ";
  double earned{};
  std::cin >> earned;
  return earned;
}

void printAd(const Advert& ad) {
  std::cout << "Number of ads watched: " << ad.count << '\n';
  std::cout << "Number of ads clicked: " << ad.clicked << '\n';
  std::cout << "Average earned per ad: " << ad.earned << '\n';

  double totalEarned = ad.count * ad.clicked / 100.0 * ad.earned;
  std::cout << "Total earned: " << totalEarned << "€\n";
}

int main() {
  Advert ad{getAdCount(), getAdClicks(), getAverageEarned()};
  printAd(ad);
  std::cout << "test";
  return 0;
}
