#include <iostream>

void remove(int* arr, int size, int index);

int main(){

 const int size = 8;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 int index = 0;
 std::cout << "INDEX" << std::endl;
 std::cin >> index;

 remove(arr, size, index);

	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}

void remove(int* arr, int size, int index){
	if(index < 0 || index >= size){
		std::cout << "NO" << std::endl;
		return;
	}

	for(int i = index; i < size; ++i){
		arr[i] = arr[i + 1];
	}
}
