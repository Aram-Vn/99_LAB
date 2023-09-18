#include <iostream>

int main(){

 srand(time(0));
 
 int SIZE = 0;
 std::cin >> SIZE;

 const int size = SIZE;
 int arr[size][size];

	for(int  i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			arr[i][j] = 1 + rand()%100;
		}
	}
 
	for(int  i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
