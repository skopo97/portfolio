#include <iostream>

int main() {
    int max_size;

    std::cin >> max_size;
    int numbers[max_size];

    for (int i = 0; i < max_size; i++) {
        std::cin >> numbers[i];
    }


    int max_number = numbers[0];
    int low_number = numbers[0];

    for (int j = 0; j < max_size; j++) {
        if (numbers[j] > max_number) {
            max_number = numbers[j];
        } else if (numbers[j] < low_number) {
            low_number = numbers[j];
        }
    }
    const int result = max_number - low_number;

    std::cout << "Result = " << result;
}
