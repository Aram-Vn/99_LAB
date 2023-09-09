#include <iostream>

void decimal_to_OCTAL(int decimal_NUM) {
    int octalNumber[100];
    int i = 0;

    while (decimal_NUM != 0) {
        octalNumber[i] = decimal_NUM % 8;
        decimal_NUM /= 8; 
        i++;
    }

    std::cout << "Octal representation: ";
    for (int j = i - 1; j >= 0; j--) {
        std::cout << octalNumber[j];
    }
    std::cout << std::endl;
}

int main() {

 int decimal_NUM;

 std::cout << "Enter a decimal number: ";
 std::cin >> decimal_NUM;

 decimal_to_OCTAL(decimal_NUM);

}

