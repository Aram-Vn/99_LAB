//Իրականացնել բինար որոնման ալգորիթմը զանգվածի համար ռեկուրսիվ տարբերակով։

#include <iostream>

int BS(int* arr, int start, int end, int tar);

int main(){

 const int size = 8;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 int start = 0;
 int end = size - 1;
 int tar;
 
 std::cout << "tar" << std::endl;
 std::cin >> tar;

 std::cout << BS(arr, start, end, tar) << std::endl;
}

int BS(int* arr, int start, int end, int tar){
	int mid = (start + end) / 2;

	if(start > end){
		return -1;
	}	
		
	if(arr[mid] == tar){
		return mid;
	}

	if(arr[mid] > tar){
		return BS(arr, start, mid - 1, tar);	
	} else {
		return BS(arr, mid - 1, end, tar);	
	}
	
}
