#include <iostream>

void remove(int* arr, int size);

int main(){

 const int size = 8;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 remove(arr, size);

	for(int i = 0; i < size; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}

void remove(int* arr, int size){
	int start = 0;
    int end = size - 1;

    while (start < end) {
        while (arr[start] % 2 == 0 && start < end) {
            start++;
        }

        while (arr[end] % 2 != 0 && start < end) {
            end--;
        }

        if (start < end) {
            std::swap(arr[start], arr[end]);
        }
    }
}

