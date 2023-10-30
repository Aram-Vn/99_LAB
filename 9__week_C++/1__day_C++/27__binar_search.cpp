#include <iostream>

int BS(int* arr,int start, int end, int target);

int main(){

 const int size = 12;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 int start = 0;
 int end = size - 1;
 int target = 0;
 
 std::cout << "TAR" << std::endl;
 std::cin >> target;

 std::cout << BS(arr, start, end, target) << std::endl;
}


int BS(int* arr,int start, int end, int target){
	int mid = 0;

	while(start <= end){
		mid = (start + end) / 2;

		if(arr[mid] == target){
			return mid;
		}

		if(arr[mid] > target){
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}

	return -1;
}
