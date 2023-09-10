#include <iostream>

void decimalToBinary(int decimal_Num) {
    int binary_Num[100];
    int i = 0;

    while (decimal_Num > 0) {
        binary_Num[i] = decimal_Num % 2;
        decimal_Num /= 2;
        i++;
    }
	
	if( binary_Num[0] == binary_Num[i - 1]){
		std::cout << "TRUE" << std::endl;
	}
	else{
		std::cout << "folse" << std::endl;
	}

}

int main() {
 int decimal_Num;

 std::cout << "Enter a num: ";
 std::cin >> decimal_Num;

 decimalToBinary(decimal_Num);
}

