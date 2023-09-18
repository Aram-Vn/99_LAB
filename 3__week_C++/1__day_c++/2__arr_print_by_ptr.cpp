#include <iostream>

int main(){

 const int SIZE = 5;
 int arr[SIZE] = {1, 3, 5, 7, 9};

 int* arr_ptr = arr;

	for(int i = 0; i < SIZE; ++i){
		std::cout << *(arr_ptr + i) << " ";
	} 

 arr_ptr = arr;

 std::cout << std::endl;

	for(int i = 0; i < SIZE; ++i){
		std::cout << *arr_ptr++ << " ";
	} 

 std::cout << std::endl;

 arr_ptr = arr;

	for(int i = 0; i < SIZE; ++i){
		std::cout << ++*arr_ptr << " ";
	} 

 std::cout << std::endl;
}
