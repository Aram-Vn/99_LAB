#include <iostream>

int factorial(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << factorial(num) << std::endl; 
}

int factorial(int num){
	int tmp = 1;

	for(int i = 1; i <= num; ++i){
		tmp *= i;
	}

	return tmp;
}
