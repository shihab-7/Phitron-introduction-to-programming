#include <iostream>
#include <string>
#include <cctype> // for isdigit

std::string applyRules(const std::string& input) {
    std::string result;
    int num = 0;
    std::string C;

    for (size_t i = 0; i < input.length(); ++i) {
        if (isdigit(input[i])) {
            num = input[i] - '0'; // Convert the digit character to an integer
            while (isdigit(input[i + 1])) {
                num = num * 10 + (input[i + 1] - '0');
                ++i;
            }
        } else if (isalpha(input[i])) {
            C += input[i];
        } else {
            // Append C N times to the result string
            for (int j = 0; j < num; ++j) {
                result += C;
            }
            num = 0;
            C = "";
            result += input[i]; // Append the operator to the result string
        }
    }

    // Append any remaining characters
    for (int j = 0; j < num; ++j) {
        result += C;
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = applyRules(input);
    std::cout << output << std::endl;

    return 0;
}
