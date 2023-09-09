#include <iostream>

void decimalToBinary(int decimalNumber) {
    int binaryNumber[100];
    int i = 0;

    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }

    std::cout << "Binary representation: ";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binaryNumber[j];
    }
    std::cout << std::endl;
}

int main() {
 int decimalNumber;

 std::cout << "Enter a decimal number: ";
 std::cin >> decimalNumber;

 decimalToBinary(decimalNumber);
}

