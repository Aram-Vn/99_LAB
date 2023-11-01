//Իրականացնել ֆունկցիա, որը կստանա NxM (N քանակությամբ տող և M 
//քանակությամբ սյուն) չափանի մատրից և կվերադարձնի միաչափ զանգված, 
//որը կպարունակի մատրիցի յուրաքանչյուր տողի մեծագույն էլեմենտի արժեքը։ 
//Այսինքն միաչափ զանգվածի i ինդեքսի էլեմենտի արժեքը հավասար է լինելու 
//մատրիցի i ինդեքսի տակ գտնվող տողի (միաչափ զանգվածի) մեծագույն արժեքին։

#include <iostream>

void max_in_every_row(int arr[][4], int* res);

int main(){

  srand(time(0));

 const int row = 5;
 const int col = 4;
 int arr[row][col];
 int res[row];

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			arr[i][j] = 1 + rand() % 100;
		}
	}

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

 std::cout << std::endl;

 max_in_every_row(arr, res);

	for(int i = 0; i < row; ++i){
		std::cout << res[i] << " ";
	}
 std::cout << std::endl;
}

void max_in_every_row(int arr[][4], int* res){
	int row = 5;
	int col = 4;
	int max = arr[0][0];

	for(int i = 0; i < row; ++i){
		for(int j = 0; j < col; ++j){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
 		res[i] = max;
		max = arr[i + 1][0];
	}
}
