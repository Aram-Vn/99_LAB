#include <iostream>

int quick_sort(int* arr, int SIZE);

int main(){

 const int SIZE = 6;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 std::cout << quick_sort(arr, SIZE) << std::endl;;

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
	
}

int quick_sort(int* arr, int SIZE){
	int pivot_ind = -1;

	for(int i = 0; i < SIZE; ++i){
	if(arr[i] <= arr[SIZE - 1] ){
			++pivot_ind;
			std::swap(arr[pivot_ind], arr[i]);	
		}
	}

	return pivot_ind;
}

