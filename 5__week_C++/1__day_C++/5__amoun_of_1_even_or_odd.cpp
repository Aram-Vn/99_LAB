//Ստուգել թվի 1 արժեքով բիթերի քանակը կենտ է, թե զույգ

#include <iostream>

bool amount_of_1_even(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(amount_of_1_even(num)){
		std::cout << "odd" << std::endl;
	}
	else{
		std::cout << "eaven" << std::endl;
	}
}

bool amount_of_1_even(int num){
	bool flag = 0;

	while(num){
		if(num & 1){
			flag ^= 1;
		}
		num = num >> 1;
	}

	return flag;
}
