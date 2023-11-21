//Գրել ֆունկցիա, որը որպես արգումենտ կստանա բնական թիվ և կստուգի թիվը երկուսի աստիճան է թե ոչ: O(1) space and time complexity.

    // A power of two number in binary form has exactly one '1' bit.
    // For example, 4 is 100 in binary, and 8 is 1000.
    // To check if a number is a power of two, you can use the bitwise AND operation.
    // If n is a power of two, then n & (n - 1) will be 0.

#include <iostream>

bool is_power_of_2(int n);

int main() {
    int num;
    std::cin >> num;

    if (is_power_of_2(num)) {
        std::cout << "YES!" << std::endl;
    } else {
        std::cout << "NO!" << std::endl;
    }
}

bool is_power_of_2(int n) {

    if (n <= 0) {
        return false;
    }

    return (n & (n - 1)) == 0;
}
