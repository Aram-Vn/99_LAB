//Գրել  ֆունկցիա, որը կստուգի արդյոք մատրիցը՝ գլխավոր անկյունագծի նկատմամբ սիմետրիկ է:

#include <iostream>

bool is_symmetric(int arr[4][4]);

int main(){

  srand(time(0));

 const int size = 4;
 int arr[size][size];

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cin >> arr[i][j];
		}
	}

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	if(is_symmetric(arr)){
		std::cout << "YES!" << std::endl;
	} else {
		std::cout << "NO!" << std::endl;
	}
}

bool is_symmetric(int arr[4][4]){
	int size = 4;

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			if(arr[i][j] != arr[j][i]){
				return false;
			}
		}
	}

	return true;

}
