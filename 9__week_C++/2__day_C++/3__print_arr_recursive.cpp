//Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային զանգված և տպում է զանգվածի էլեմենտները էկրանին։

#include <iostream>

void printa(int* arr, int size);

int main(){

 const int size = 8;
 int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8};

 printa(arr, size - 1);

 std::cout << std::endl;
}

void printa(int* arr, int size){

	if(size < 0){
		return;
	}	

	printa(arr, size - 1);
	std::cout << arr[size] << " ";
}
