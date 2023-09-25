#include <iostream>

bool is_3(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(is_3(num)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

bool is_3(int num){
	if(num < 0){
		num = num * (-1);
	}		

	if(num <= 0){
		return false;
	}
	
	if(num % 10 == 3){
		return true;
	}

	is_3(num/10);
	return 0;
}
