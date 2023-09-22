#include <iostream>

void print(int num);
void arr_print(void(*print_ptr)(int), int* arr, int SIZE);

int main(){

 const int SIZE = 5;
 int arr[SIZE] = {1, 2, 3, 4, 5};

 arr_print(print, arr, SIZE);
}

void print(int num){
	std::cout << num << std::endl;
}

void arr_print(void(*print_ptr)(int), int* arr, int SIZE){
	for(int i = 0; i < SIZE; ++i){
		(print_ptr)(arr[i]);
	}
}
