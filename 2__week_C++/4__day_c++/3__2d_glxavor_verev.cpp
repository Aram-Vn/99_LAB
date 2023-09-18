#include <iostream>

int main(){

 srand(time(0));
 const int col = 3;
 const int row = 3;
 int arr[col][row];

	for(int i = 0; i < col; ++i){
		for(int j = 0; j < row; ++j){
			arr[i][j] = rand() % 100;
		}
	}

 int sum = 0;

	for(int i = 0; i < col; ++i){
		for(int j = i; j < row; ++j){
			sum += arr[i][j];	
		}
	}

	for(int i = 0; i < col; ++i){
		for(int j = 0; j < row; ++j){
			std::cout << arr[i][j] << " ";	
		}
		std::cout << std::endl;
	}

 std::cout << sum << std::endl;
}
