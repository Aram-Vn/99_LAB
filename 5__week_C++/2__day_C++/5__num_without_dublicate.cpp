//Տրված է ամբողջ թվերի զանգված, որում բոլոր էլեմենտները կրկնվում են, բացի մեկից։ Իրականացնել ալգորիթմ, որը կգտնի միակ էլեմենտը O(n) ժամանակում։ Օգտվել բիթային գորխողություններից։

#include <iostream>

int find(int* arr, int SIZE);

int main(){

 const int SIZE = 7;
 int arr[SIZE] = {1, 2, 3, 2, 1, 5, 5};

 std::cout << find(arr, SIZE) << std::endl; 
}

int find(int* arr, int SIZE){
	int num = 0;

	for(int i = 0; i < SIZE; ++i){
		num ^= arr[i];
	}

	return num;
}
