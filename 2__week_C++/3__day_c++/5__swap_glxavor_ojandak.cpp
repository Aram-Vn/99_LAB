#include <iostream>

 void swap_glxavor_jandak(int arr [][4]);

int main(){

 srand(time(0));
 
 const int SIZE1 = 4;
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

	std::cout << "******\n"; 

swap_glxavor_jandak(arr);

}

void swap_glxavor_jandak(int arr [][4]){
	const int SIZE1 = 4;
	int tmp = 0;
	
	for(int i = 0; i < SIZE1; ++i){
		tmp = arr[i][i];
		arr[i][i] = arr[i][SIZE1 - i - 1];
		arr[i][SIZE1 - i - 1] = tmp;
	}

	for(int  i = 0; i < SIZE1; ++i){
		for(int j = 0; j < SIZE1; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
