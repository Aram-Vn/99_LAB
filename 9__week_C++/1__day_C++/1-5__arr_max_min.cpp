#include <iostream>

int main(){

 const int size = 8;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 int max = arr[0];
 int min = arr[0];
 int max_i = 0;
 int min_i = 0;

	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << '\n';

	for(int i = 0; i < size; ++i){
		if (max < arr[i]) {
			max = arr[i];
			max_i = i;
		}

		if (min > arr[i]) {
			min = arr[i];
			min_i = i;
		}
	}

	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << '\n';

 std::cout << "max :" << max << std::endl;
 std::cout << "max_i :" << max_i << std::endl;

 std::cout << "min :" << min << std::endl;
 std::cout << "min_i :" << min_i << std::endl;
}
