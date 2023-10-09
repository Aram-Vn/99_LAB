#include <iostream>

int quick_sort(int* arr, int start, int end);

int main(){

 const int SIZE = 6;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 int start = 0;
 int end = SIZE - 1;

 std::cout << quick_sort(arr, start, end) << std::endl;;

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
	
}

int quick_sort(int* arr, int start, int end){
	int pivot_ind = start - 1;

	for(int i = 0; i <= end; ++i){
		if(arr[i] <= arr[end] ){
			++pivot_ind;
			std::swap(arr[pivot_ind], arr[i]);	
		}
	}

	return pivot_ind;
}

