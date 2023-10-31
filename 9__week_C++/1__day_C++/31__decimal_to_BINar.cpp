#include <iostream>

void decimal_to_binar(int num);

int main(){
 int num = 0;
 std::cin >> num;
 
 decimal_to_binar(num);
}

void decimal_to_binar(int num){
	const int SIZE = 33;
	char arr[SIZE] {};
	int size = 0;

	while(num > 0){
		arr[size] = num % 2 + '0';
		num /= 2;
		++size;
	}

	for(int i = size; i >= 0; --i){
		std::cout << arr[i];
	}
	std::cout << std::endl;
}
