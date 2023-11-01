//20) Գրել ֆունկցիա, որը կվերադարձնի NxM (N քանակությամբ տող 
//և M քանակությամբ սյուն) չափանի մատրիցի մեծագույն արժեքը։

#include <iostream>

int max_of_arr(int arr[][4]);

int main(){

  srand(time(0));

 const int row = 5;
 const int col = 4;
 int arr[row][col];

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			arr[i][j] = 1 + rand() % 100;
		}
	}

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
 std::cout << std::endl;

 std::cout << max_of_arr(arr) << std::endl;
}

int max_of_arr(int arr[][4]){
	int row = 5;
	int col = 4;
	int max = arr[0][0];

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	
	return max;
}
