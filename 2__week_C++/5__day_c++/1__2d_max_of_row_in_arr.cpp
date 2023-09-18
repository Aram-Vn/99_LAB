#include <iostream>

int main(){

 srand(time(0));
 const int row = 4;
 const int col = 3;

 int arr[row][col];
 int res[row];

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < row; ++j){
 			arr[i][j] = rand() % 100;
		}
	}

 int max = 0;
 int index = arr[0][0];

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < row; ++j){
			if(arr[i][j] > max){
				max = arr[i][j];
			}			
		res[i] = max;
		}
		max = arr[i + 1][0];
	}

	
	for(int i = 0; i < row; ++i){
		for(int j = 0; j < row; ++j){
 			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

 std::cout << "******\n";

	 for(int i = 0; i < row; ++i){
		std::cout << res[i] << " ";
	}

 std::cout << std::endl;
}
