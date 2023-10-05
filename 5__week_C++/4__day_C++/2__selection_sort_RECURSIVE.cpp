#include <iostream>

void selection_s(int* arr, int SIZE, int i, int j, int min_index);

int main(){

 const int SIZE = 5;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 int index = 0;

 selection_s(arr, SIZE, 0, 1, index);
	
	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;

}

void selection_s(int* arr, int SIZE, int i, int j, int min_index){
	if(i < SIZE - 1){
		if(j < SIZE){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}

			selection_s(arr, SIZE, i, j + 1, min_index);
				return;	
		}

		if(min_index != i){
			int tmp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = tmp;
		}	

		++i;
		selection_s(arr, SIZE, i, i + 1, i);
	}

}
