#include <iostream>
#include <string>

int zazaBottlesDrank(const std::string& binaryString) {
    int zazaBottles = 0;
    int currentCount = 0;

    for (char c : binaryString) {
        if (c == '1') {
            currentCount++;
        } else {
            zazaBottles += (currentCount > 0) ? 1 : 0;
            currentCount = 0;
        }
    }

    zazaBottles += (currentCount > 0) ? 1 : 0;

    return zazaBottles;
}

int main() {
    int T;
    std::cin >> T;
    std::cin.ignore(); // Ignore the newline after T

    while (T--) {
        std::string binaryString;
        std::getline(std::cin, binaryString);

        int zazaDrank = zazaBottlesDrank(binaryString);
        std::cout << zazaDrank << std::endl;
    }

    return 0;
}
