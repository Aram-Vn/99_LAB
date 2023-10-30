#include <iostream>

int main(){

 const int size = 8;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

	int tmp = 0;

	for(int i = 0; i < size / 2; ++i){
//		std::swap(arr[i], arr[size - 1 -i]);
		tmp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = tmp;
	}

	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}
