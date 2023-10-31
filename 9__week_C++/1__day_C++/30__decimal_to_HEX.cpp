#include <iostream>

void decimal_to_hex(int num);

int main(){

 int num = 0;
 std::cin >> num;

 decimal_to_hex(num);
}

void decimal_to_hex(int num){
	const int SIZE = 32;
	char arr[SIZE];

	int size = 0;
	int digit = 0;

	while(num > 0){
		digit = num % 16;

		if(digit < 9){
			arr[size] = digit + 48;
		} else {
			arr[size] = digit + 55;
		}
		num /= 16;
		++size;
	}

	std::cout << "0x";
	for(int i = size - 1; i >= 0; --i){
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
