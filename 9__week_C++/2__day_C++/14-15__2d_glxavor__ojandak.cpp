//14) Իրականացնել ֆունկցիա, որը հաշվում և վերադարձնում է քառակուսային մատրիցի գլխավոր անկյունագծի տարրերի գումարը։

//15) Իրականացնել ֆունկցիա,որը հաշվում և վերադարձնում է քառակուսային մատրիցի օժանդակ անկյունագծի տարրերի գումարը։

#include <iostream>

int glxavor(int arr[][4]);
int ojandak(int arr[][4]);

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

 std::cout << "glxavor " << glxavor(arr) << std::endl;
 std::cout << "ojandak " << ojandak(arr) << std::endl;

}

int glxavor(int arr[4][4]){
	int size = 4;
	int sum = 0;

	for(int i = 0; i < size; ++i){
		sum += arr[i][i];
	}

	return sum;
}

int ojandak(int arr[][4]){
	int size = 4;
	int sum = 0;

	for(int i = 0; i < size; ++i){
		sum += arr[i][size - i - 1];
	}

	return sum;
}
