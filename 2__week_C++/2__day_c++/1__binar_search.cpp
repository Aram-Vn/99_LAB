#include <iostream>

	int BS(int arr[6], int start, int end, int target){
		int mid = 0;

		while(start <= end){
			mid = (start + end) / 2;
			
			if(arr[mid] == target){
				return mid;
			}
			else if(arr[mid] > target){
				end = mid - 1;
			}
			else if(arr[mid] < target){
				start = mid + 1;			
			}
		}

		return -1;
	}


int main(){

 const int SIZE = 7;
 int arr[SIZE] {1, 2, 3, 4, 5, 6, 7};
 
 int start = 0;
 int end = SIZE - 1;
 int target = 0;
 std::cin >> target;
 
 int tmp = BS(arr, start, end, target);

	if( tmp != -1){
		std::cout << tmp << std::endl;
	}

}
