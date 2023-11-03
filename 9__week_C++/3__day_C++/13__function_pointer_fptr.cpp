//Իրականացնել ֆունկցիա, որը ստանում է զանգված և բուլիան արժեք վերադարձնող ֆունկցիայի ցուցիչ։ Ֆունկցիան զանգվածի բոլոր էլեմենտների վրա կանչում է ստացված ֆունկցիան։

#include <iostream>

bool is_odd(int num);
void print_odd(int* arr, int size, bool(is_odd_ptr)(int));

int main(){
 const int size = 8;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 print_odd(arr, size, is_odd);
}

bool is_odd(int num){
	if(num % 2 == 0){
		return 0;
	}
	return true;
}


void print_odd(int* arr, int size, bool(is_odd_ptr)(int)){
	for(int i = 0; i < size; ++i){
		if(is_odd(arr[i])){
			std::cout << arr[i] << " ";
		}
	}
	std::cout << std::endl;

}
