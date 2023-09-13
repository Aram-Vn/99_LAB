#include <iostream>

	int BSR(int* arr, int start, int end, int target){
		int mid = (start + end) / 2;

		if(start > end){
			return -1;
		}
			
		if(arr[mid] == target){
			return mid;
		}
		else if(arr[mid] > target){
			return BSR(arr, start, mid - 1, target);
		}
		else if(arr[mid] < target){
			return BSR(arr, mid + 1, end, target);
		}

		return -1;
	}

int main(){

 const int SIZE = 8;
 int arr[SIZE] {1, 2, 3, 4, 5, 6, 7, 8};

 int start = 0;
 int end = SIZE - 1;

 int target = 0;
 std::cin >> target;

 int tmp = BSR(arr, start, end, target);

	if(tmp != -1){
		std::cout << tmp << std::endl;
	}
}

