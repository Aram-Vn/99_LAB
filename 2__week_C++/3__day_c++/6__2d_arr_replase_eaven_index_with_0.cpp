//Իրականացնել ֆունկցիա, որը ստանում է քառակուսային մատրից։
// Ֆունկցիան մատրիցի զույգ ինդեքսով տողերի էլեմենտները 
//փոխարինում է 0-ներով և վերադարձնում։

#include <iostream>

 void replase(int arr [][4]);

int main(){

 srand(time(0));

 const int SIZE = 4;
 int arr[SIZE][SIZE];

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			arr[i][j] = 1 + rand() % 9;
		}
	}

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

 replase(arr);

 std::cout << "********\n";

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
 void replase(int arr [][4]){
	int SIZE = 4;
	
	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			if( i % 2 == 0 && j % 2 == 0){
				arr[i][j] = 0;
			}
		}
	}
}
