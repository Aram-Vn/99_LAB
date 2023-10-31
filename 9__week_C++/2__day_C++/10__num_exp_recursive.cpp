//Իրականացնել ռեկուրսիվ ֆունկցիա, որը ունի հետևյալ տեսքը power (num, exp); Ֆունկցիան վերադարձնում է num ամբողջ թվի exp աստիճանի արժեքը։

#include <iostream>

int pow(int num, int exp);

int main(){
 int num = 0;
 int exp = 0;

 std::cout << "NUM" << std::endl;
 std::cin >> num;

 std::cout << "EXP" << std::endl;
 std::cin >> exp;

 std::cout << pow(num, exp) << std::endl;
}

int pow(int num, int exp){
	if(exp == 0){
		return 1;
	}

	return num * pow(num, exp - 1);
}
