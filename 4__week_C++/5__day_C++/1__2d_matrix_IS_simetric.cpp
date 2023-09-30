#include <iostream>

bool Is_simetric(int arr[][3]);

int main(){

 const int SIZE = 3;
 int arr[SIZE][SIZE];

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE; ++j){
			std::cin >> arr[i][j];
		}
	}

	if(Is_simetric(arr)){
		std::cout << "SIMETRIC" << std::endl;	
	}
	else{
		std::cout << "NO" << std::endl;	
	}
}

bool Is_simetric(int arr[][3]){

	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
//			if(arr[i][j] != arr[j][i] || (arr[i][i] != arr[3 - 1 - i][3 - 1 - i])){ // + ankjunagic
			if(arr[i][j] != arr[j][i]){
				return false;
			}
		}
	}

	return true;
}
