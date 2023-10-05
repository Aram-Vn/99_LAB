#include <iostream>

void selection_s(int* arr, int SIZE);

int main(){

 const int SIZE = 5;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 selection_s(arr, SIZE);
	
	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;

}

void selection_s(int* arr, int SIZE){

	int min = arr[0];
	int index = 0;
	int tmp = 0;
	bool flag = 0;

	for(int i = 0; i < SIZE; ++i){
		min = arr[i];
		for(int j = i + 1; j < SIZE; ++j){
			if(arr[j] < min){
				min = arr[j];
				index = j;
				flag = 1;
			}
		}
		if(flag){
			tmp = arr[index];
			arr[index] = arr[i];
			arr[i] = tmp;
		}
		flag = 0;
	}
}
