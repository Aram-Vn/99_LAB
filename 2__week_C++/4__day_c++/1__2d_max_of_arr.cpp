#include <iostream>

int main(){

 srand(time(0));
 const int col = 3;
 const int row = 5;
 int arr[col][row];

	for(int i = 0; i < col; ++i){
		for(int j = 0; j < row; ++j){
			arr[i][j] = rand() % 100;
		}
	}

	for(int i = 0; i < col; ++i){
		for(int j = 0; j < row; ++j){
			std::cout << arr[i][j] << " ";	
		}
		std::cout << std::endl;
	}

 int max = arr[0][0];
	
	for(int i = 0; i < col; ++i){
		for(int j = 0; j < row; ++j){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}

 std::cout << max << std::endl;

}
