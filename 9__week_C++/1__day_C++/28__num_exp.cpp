#include <iostream>

double num_exp(int num, int exp);

int main(){

 int num = 0;
 std::cout << "NUM" << std::endl;
 std::cin >> num;

 int exp = 0;
 std::cout << "EXP" << std::endl;
 std::cin >> exp;

 std::cout << num_exp(num, exp) << std::endl;

}

double num_exp(int num, int exp){
	bool flag = 0;

	if(exp < 0){
		exp = exp * -1;
		flag = 1;
	}

	double res = 1;

	for(int i = 0; i < exp; ++i){
		res *= num;
	}

	if(flag){
		res = 1 / res;
		return res;
	}

	return res;

}
