// Իրականացնել ծրագիր, որը քառակուսային մատրիցի օժանդակ անկյունագծից 
//վերև կհաշվի բոլոր էլեմենտների գումարը։

#include <iostream>

int ojandak_verev(int arr[][4]);

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

 std::cout << "ojandak_verev " << ojandak_verev(arr) << std::endl;

}

int ojandak_verev (int arr[4][4]){
	int size = 4;
	int sum = 0;

	for(int i = 0; i < size; ++i){
		for(int j = size - i - 2; j >= 0; --j){
			sum += arr[i][j];
		}
	}

	return sum;
}
