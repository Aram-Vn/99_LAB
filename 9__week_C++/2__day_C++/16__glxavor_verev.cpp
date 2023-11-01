//Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է քառակուսային 
//մատրիցի գլխավոր անկյունագծից վերև գտնվող տարրերի գումարը 
//անկյունագծի էլեմենտները ներառյալ։

#include <iostream>

int glxavor_verev(int arr[][4]);

int main(){

  srand(time(0));

 const int size = 4;
 int arr[size][size];

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			arr[i][j] = 1 + rand() % 10;
		}
	}

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
 std::cout << std::endl;

 std::cout << "glxavor_verev " << glxavor_verev(arr) << std::endl;

}

int glxavor_verev (int arr[4][4]){
	int size = 4;
	int sum = 0;

	for(int i = 0; i < size; ++i){
		for(int j = i; j < size; ++j){
			sum += arr[i][j];
		}
	}

	return sum;
}
