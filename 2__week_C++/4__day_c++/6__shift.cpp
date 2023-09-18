#include <iostream>

int main(){

 const int SIZE = 9;
 int arr [SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 int shift = 0;
 std::cin >> shift;

 int tmp = 0;
 int k = SIZE - shift;

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " "; 
	}
 std::cout << std::endl;

	for(int i = 0; i < shift / 2; ++i){
		tmp = arr[k];
		arr[k] = arr[SIZE - 1 - i];
		arr[SIZE - 1 -i] = tmp;
		++k;
	}

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 
 std::cout << std::endl;

	for(int i = 0; i < (SIZE - shift) / 2; ++i){
		tmp = arr[i];
		arr[i] = arr[SIZE - 1 - i - shift];
		arr[SIZE - 1 - i - shift] = tmp;
	}

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;

	for(int i = 0; i < SIZE/ 2; ++i){
		tmp = arr[i];
		arr[i] = arr[SIZE - 1 - i];
		arr[SIZE - 1 - i] = tmp;
	}

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}
