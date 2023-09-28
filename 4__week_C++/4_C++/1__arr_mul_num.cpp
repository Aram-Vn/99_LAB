#include <iostream>

void arr_mul_num(int* arr, int SIZE, int num);

int main(){

 const int SIZE = 5;
 int arr[SIZE];
 
 int num = 0;
 std::cout << "ENTER NUM" << std::endl;
 std::cin >> num;
 
 std::cout << "ENTER ARR" << std::endl;

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 arr_mul_num(arr, SIZE, num);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void arr_mul_num(int* arr, int SIZE, int num){
	for(int i = 0; i < SIZE; ++i){
		arr[i] = arr[i] * num;
	}
}
