#include <iostream>

long long int calculatePlantValue(int Y) {
    if (Y == 0) {
        return 1; // Base case: the initial tree has a value of 1.
    }

    long long int prevValue = 1;
    long long int currentValue = 1;

    for (int i = 2; i <= Y; i++) {
        long long int nextValue = currentValue + prevValue;
        prevValue = currentValue;
        currentValue = nextValue;
    }

    return currentValue;
}

int main() {
    int Y;
    std::cin >> Y;

    long long int totalValue = calculatePlantValue(Y);
    std::cout << totalValue << std::endl;

    return 0;
}
