#include <iostream>

 void arr_reverse(char* arr, const int SIZE); 

int main(){

 const int SIZE = 8;
 char arr[SIZE];
 
	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 std::cout << "*****\n";

 arr_reverse(arr, SIZE);

}

	void arr_reverse(char* arr, const int SIZE){
		char tmp = 'a';	

		for(int i = 0; i < SIZE / 2; ++i){
			tmp = arr[i];
			arr[i] = arr[SIZE - 1 - i];
			arr[SIZE - 1 - i] = tmp;
		}

		for(int i = 0; i < SIZE; ++i){
			std::cout << arr[i] << " ";
		}
		
		std::cout << std::endl;
	}
