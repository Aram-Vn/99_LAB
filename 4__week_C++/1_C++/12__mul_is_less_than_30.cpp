//զ) թվի թվանշանների արտադրյալը փոքր է երեսունից:

#include <iostream>

bool mul_less_30(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(mul_less_30(num)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

bool mul_less_30(int num){
	int res = 1;

	while(num > 0){
		res = res * (num % 10);
		num /= 10;
	}


	if(res < 30){
		return true;
	}
	else{
		return false;
	}
}
