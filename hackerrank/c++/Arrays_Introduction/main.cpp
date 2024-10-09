#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int MAX_SIZE;
    cin >> MAX_SIZE;

    int numbers[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++) {
        cin >> numbers[i];
    }

    for(int j = MAX_SIZE -1 ; j >= 0; j--) {
        cout << numbers[j] << " ";
    }
    return 0;
}