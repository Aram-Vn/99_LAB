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

 int min = arr[0][0];
 int i_ind = 0;
 int  j_ind = 0;	 

	for(int i = 0; i < col; ++i){
		for(int j = 0; j < row; ++j){
			if(arr[i][j] < min){
				min = arr[i][j];
				i_ind = i;
				j_ind = j;
			}
		}
	}

 std::cout << min << "\ni = " << i_ind << "\nj = " << j_ind << std::endl;
}
