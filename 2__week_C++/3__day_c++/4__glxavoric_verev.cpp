#include <iostream>

 int ojandak_sum(int arr [][4]);

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

 std::cout << ojandak_sum(arr) << std::endl;

}

int ojandak_sum(int arr [][4]){
	const int SIZE1 = 4;
	int sum = 0;
	
	for(int  i = 0; i < SIZE1; ++i){
		for(int j = i; j < SIZE1; ++j){
			sum += arr[i][j];
		}
	}


	return sum;
}
