#include <iostream>

int quick_sort_helper(int* arr, int start, int end);
void quick_sort(int* arr, int start, int end);

int main(){

 const int SIZE = 8;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 int start = 0;
 int end = SIZE - 1;

 quick_sort(arr, start, end);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
	
}

int quick_sort_helper(int* arr, int start, int end){
	int pivot_ind = start - 1;

	for(int i = start; i <= end - 1; ++i){
		if(arr[i] < arr[end] ){
			++pivot_ind;
			std::swap(arr[pivot_ind], arr[i]);	
		}
	}
	std::swap(arr[pivot_ind + 1], arr[end]);	

	return pivot_ind + 1;
}

void quick_sort(int* arr, int start, int end){

	if(start < end){
		int pivot = quick_sort_helper(arr, start, end);
		quick_sort(arr, start, pivot - 1);
		quick_sort(arr, pivot + 1, end);
	}

}
