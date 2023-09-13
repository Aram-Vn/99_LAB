#include <iostream>

void print_arr(int* arr, int size);

int main(){

 const int SIZE = 8;
 int arr[SIZE] {1, 2, 3, 4, 5, 6, 7, 8};
 int size = SIZE - 1;
 print_arr(arr, size);

}

void print_arr(int* arr, int size){

	if(size < 0){
		return;
	}
		
	print_arr(arr, size - 1);
	std::cout << arr[size] << std::endl;

}
