#include <iostream>

 int glxavor_sum(int arr [][3]);

int main(){

 srand(time(0));
 
 const int SIZE1 = 3;
 int arr[SIZE1][SIZE1];

	for(int  i = 0; i < SIZE1; ++i){
		for(int j = 0; j < SIZE1; ++j){
			arr[i][j] = 1 + rand()%100;
		}
	}

	for(int  i = 0; i < SIZE1; ++i){
		for(int j = 0; j < SIZE1; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

 

 std::cout << glxavor_sum(arr) << std::endl;

}

int glxavor_sum(int arr [][3]){
	const int SIZE1 = 3;
	int sum = 0;
	
	for(int  i = 0; i < SIZE1; ++i){
		sum += arr[i][i];
	}

	return sum;
}
