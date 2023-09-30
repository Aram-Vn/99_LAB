#include <iostream>

void sum_of_2_matrix(int arr1[][3], int arr2[][3], int res[][3]);

int main(){

 const int SIZE = 3;
 int arr1[SIZE][SIZE];
 int arr2[SIZE][SIZE];
 int res[SIZE][SIZE];

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cin >> arr1[i][j];
		}
	}

 std::cout << "********\n";

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cin >> arr2[i][j];
		}
	}

 std::cout << "********\n";

 sum_of_2_matrix(arr1, arr2, res);

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cout << res[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void sum_of_2_matrix(int arr1[][3], int arr2[][3], int res[][3]){

	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			res[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

}
