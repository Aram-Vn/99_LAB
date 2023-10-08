//Տրված ամբողջ թվային զանգվածը սորտավորել Bubble Sort ալգորիթմով

#include <iostream>

void buble_s(int* arr,int SIZE);

int main(){

 const int SIZE = 8;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 buble_s(arr, SIZE);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}

void buble_s(int* arr, int SIZE){
	int tmp = 0;
	bool flag = 1;

	for(int i = 0; i < SIZE; ++i){
		for(int j = 0; j < SIZE - 1 - i; ++j){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if(flag){	
			break;
		}
		flag = 1;
	}
}
