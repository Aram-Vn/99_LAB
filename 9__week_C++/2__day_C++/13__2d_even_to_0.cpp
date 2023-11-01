//Իրականացնել ֆունկցիա, որը ստանում է քառակուսային մատրից։ Ֆունկցիան մատրիցի զույգ ինդեքսով տողերի էլեմենտները փոխարինում է 0-ներով և վերադարձնում։

#include <iostream>

void even_row_to_0(int arr[4][4]);

int main(){

  srand(time(0));

 const int size = 4;
 int arr[size][size];

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			arr[i][j] = 1 + rand() % 100;
		}
	}

 even_row_to_0(arr);

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void even_row_to_0(int arr[4][4]){
	int size = 4;

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			if(i % 2 == 0){
				arr[i][j] = 0;
			}
		}
	}

}
