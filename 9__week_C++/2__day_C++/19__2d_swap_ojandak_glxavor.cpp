//Իրականացնել ֆունկցիա, որը քառակուսային մատրիցի գլխավոր և օժանդակ 
//անկյունագծի էլեմենտների արժեքները տեղերով կփոխի

#include <iostream>

void ojandak_glxavor(int arr[][4]);

int main(){

  srand(time(0));

 const int size = 4;
 int arr[size][size];

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			arr[i][j] = 1 + rand() % 100;
		}
	}

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	
 std::cout << std::endl;
 ojandak_glxavor(arr);

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void ojandak_glxavor(int arr[][4]){
	int size = 4;

	for(int i = 0; i < size; ++i){
		std::swap(arr[i][i], arr[i][size - 1 - i]); 
	}

}
