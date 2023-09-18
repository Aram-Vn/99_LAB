#include <iostream>

void swap(int arr[][4], int SIZE);

int main(){
 srand(time(0)); 

 const int SIZE = 4;
 int arr[SIZE][SIZE];

	for(int  i = 0; i < SIZE; ++i){ 
		for(int j = 0; j < SIZE; ++j){
			arr[i][j] = 1 + rand()%100;
		}
	}

	for(int  i = 0; i < SIZE; ++i){ 
		for(int j = 0; j < SIZE; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

// std::cout << *(arr) << std::endl;
 
 std::cout << "*********\n";
 swap(arr, SIZE);

}

void swap(int arr[][4], int SIZE){

 int arr1[SIZE][SIZE];

	for(int  i = 0; i < SIZE; ++i){ 
		for(int j = 0; j < SIZE; ++j){
//			if(i != j){
			arr1[i][j] = arr[j][i];
//			}
		}
	}

	for(int  i = 0; i < SIZE; ++i){ 
		for(int j = 0; j < SIZE; ++j){
			std::cout << arr1[i][j] << " ";
		}
	std::cout << std::endl;
	}

}
