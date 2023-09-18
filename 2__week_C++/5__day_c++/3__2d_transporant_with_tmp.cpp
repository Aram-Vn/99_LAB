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

 std::cout << "*********\n";
 swap(arr, SIZE);

}

void swap(int arr[][4], int SIZE){
	int tmp = 0;

	for(int  i = 0; i < SIZE; ++i){ 
		for(int j = 1 + i; j < SIZE; ++j){
			tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
	}

	for(int  i = 0; i < SIZE; ++i){ 
		for(int j = 0; j < SIZE; ++j){
			std::cout << arr[i][j] << " ";
		}
	std::cout << std::endl;
	}

}
