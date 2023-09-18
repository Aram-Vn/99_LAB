#include <iostream>

 void foo(int arr_m[][3], int arr2[], int size);

int main(){

 const int SIZE = 3;
 int arr_m[SIZE][SIZE];
 int arr2[SIZE];

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cin >> arr_m[i][j];
		}
	}	

	foo(arr_m, arr2, SIZE);


}

void foo(int arr_m[][3], int arr2[], int size){
	int m = 0;
	int max = arr_m[0][0];
	int sum = 0;

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			if(arr_m[i][j] > 0){
				sum += arr_m[i][j];
			}

			if(arr_m[i][j] > max){
				max = arr_m[i][j];
			}

			}

		if(sum > max){
			arr2[m] = sum;
		}
		else{
			arr2[m] = 0;
		++m;

		}
		max = arr_m[i + 1][0];
		sum = 0;
	}	
	
	for(int i = 0; i < size; ++i){
		std::cout << arr2[i];
	}	
}
