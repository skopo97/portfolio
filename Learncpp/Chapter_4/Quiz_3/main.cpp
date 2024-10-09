#include <iostream>

double getTowerHeight() {
    std::cout << "Enter tower height in meters: ";
    double towerHeight {};
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateHeight(double towerHeight, int seconds) {
    double distanceFallen = 0.5 * 9.8 * seconds * seconds;
    double currentHeight = towerHeight - distanceFallen;
    return currentHeight;
}

void printHeight(double currentHeight, int seconds) {


    if (currentHeight > 0) {
        std::cout << "At " << seconds << " seconds, the ball is at height: "  << currentHeight << " meters\n";
    } else {
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }
}

void calculateAndPrintHeight(double towerHeight, int seconds) {
    double currentHeight = calculateHeight(towerHeight, seconds);
    printHeight(currentHeight, seconds);
}

int main() {
    double towerHeight = getTowerHeight();

  calculateAndPrintHeight(towerHeight, 0);
    calculateAndPrintHeight(towerHeight, 1);
    calculateAndPrintHeight(towerHeight, 2);
    calculateAndPrintHeight(towerHeight, 3);
    calculateAndPrintHeight(towerHeight, 4);
    calculateAndPrintHeight(towerHeight, 5);


    return 0;
}
