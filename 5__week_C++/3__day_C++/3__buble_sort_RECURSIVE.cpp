//Տրված ամբողջ թվային զանգվածը սորտավորել Bubble Sort ալգորիթմով։recursiv

#include <iostream>

void buble_sort_rec(int* arr,int SIZE, int i, int j);

int main(){

 const int SIZE = 5;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 buble_sort_rec(arr, SIZE, 0, 0);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}

void buble_sort_rec(int* arr, int SIZE, int i, int j){
	
	if(j == SIZE - 1){
		return;
	}

	if(i == SIZE - 2){
		 buble_sort_rec(arr, SIZE, 0, j + 1);
	}
	else{
		buble_sort_rec(arr, SIZE, i + 1, j);
	}

	if(arr[i] > arr[i + 1]){
		int tmp = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = tmp;
	}
}
