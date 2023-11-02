//29. Իրականցնել ֆունկցիա, որը կստանա քառակուսային մատրից և օժանդակ անկյունագծի համեմատ կկատարի սիմետրիկ արտապատկերում (արտապատկերումը կատարել նույն մատրիցում) ։

#include <iostream>

void swap_by_ojandak(int arr[4][4]);

int main(){

  srand(time(0));

 const int size = 4;
 int arr[size][size];

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cin >> arr[i][j];
		}
	}

 swap_by_ojandak(arr);
 
 std::cout << std::endl;


	for(int i = 0; i < size; ++i){
		for (int j = 0; j < size; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

}

void swap_by_ojandak(int arr[4][4]){
	int size = 4;


	for (int i = 0; i < size; i++) {
    	for (int j = 0; j < size - i - 1; ++j) {
			std::swap(arr[i][j], arr[size - j - 1][size - i - 1]);
        }
    }
}
