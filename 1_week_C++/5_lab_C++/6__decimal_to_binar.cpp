#include <iostream>

void decimalToBinary(int decimal_Num) {
    int binary_Num[100];
    int i = 0;

    while (decimal_Num > 0) {
        binary_Num[i] = decimal_Num % 2;
        decimal_Num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary_Num[j];
    }
    std::cout << std::endl;
}

int main() {
 int decimal_Num;

 std::cout << "Enter a num: ";
 std::cin >> decimal_Num;

 decimalToBinary(decimal_Num);
}

