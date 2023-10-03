#include <iostream>

int main(){

	int res = 1;
	int exp = 3;
	int num = 5;

	for(int i = 1; i <= exp; ++i){
		res *= num;
	}

	double res1 = 1;
	int num1 = 4;

	for(int i = 2; i <= num1; ++i){
		res1 *= i;
	}

 std::cout << res << std::endl;
 std::cout << res1 << std::endl;
}

