#include <iostream>

 bool is_eaven(int num);
 void print_eaven(int* arr, int SIZE, bool(*is_eaven_ptr)(int));

int main(){
 
 const int SIZE = 8;
 int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

 print_eaven(arr, SIZE, is_eaven);

}

bool is_eaven(int num){
	return !(num % 2);
}

void print_eaven(int* arr, int SIZE, bool(*is_eaven_ptr)(int)){
	for(int i = 0; i < SIZE; ++i){
		if((is_eaven_ptr)(arr[i])){
			std::cout << arr[i] << " "; 
		}
	}
	std::cout << std::endl;
}
