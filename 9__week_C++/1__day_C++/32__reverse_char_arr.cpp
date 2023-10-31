#include <iostream>

void reverse(char* arr, int size);

int main(){

 const int size = 8;
 char arr[size];

 std::cin >> arr;

 reverse(arr, size);

 std::cout << arr << std::endl;;
}

void reverse(char* arr, int size){
	for(int i = 0; i < size / 2 ; ++i){
		std::swap(arr[i], arr[size - i - 2]);
	}
}

