#include <iostream>

void insertion_s_rec(int* arr, int SIZE, int k, int j, int* tmp);

int main(){

 const int SIZE = 5;
 int arr[SIZE];
 int tmp = 0;
 
	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 insertion_s_rec(arr, SIZE, 0, 1, &tmp);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}

void insertion_s(int* arr, int SIZE){

	int tmp = 0;

	for(int k = 1; k < SIZE; ++k){
			tmp = arr[k];
			int j = k - 1;
			while(j >= 0 && arr[j] > tmp){
				arr[j + 1] = arr[j];
				--j;				
			}
		arr[j + 1] = tmp;
	}

}

void insertion_s_rec(int* arr, int SIZE, int k, int j, int* tmp){

	if(k == SIZE){
		return;
	}

		

	
}
