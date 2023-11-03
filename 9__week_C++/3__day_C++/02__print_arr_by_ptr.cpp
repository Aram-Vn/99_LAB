#include <iostream>

int main(){

 const int size = 5;
 int arr[size];

	for(int i = 0; i < size; ++i){
		arr[i] = i + 1;
	}

 int* ptr = arr;

	for(int i = 0; i < size; ++i){
		std::cout << *ptr + i << " ";
	}
 std::cout << std::endl;
}
