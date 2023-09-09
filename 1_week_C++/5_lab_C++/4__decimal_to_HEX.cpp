#include <iostream>

void decimal_to_HEX(int decimal_NUM) {
    char hexadecimal_NUM[100];
    int remainder;
	int i = 0;

    while (decimal_NUM != 0) {
        remainder = decimal_NUM % 16;
        if (remainder < 10) {
            hexadecimal_NUM[i] = remainder + 48;
        } else {
            hexadecimal_NUM[i] = remainder + 55;
        }
        decimal_NUM /= 16;
        i++;
    }

    std::cout << "0x";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << hexadecimal_NUM[j];
    }
    std::cout << std::endl;
}

int main() {
 int decimal_NUM;

 std::cout << "Enter num: ";
 std::cin >> decimal_NUM;

 decimal_to_HEX(decimal_NUM);
}

