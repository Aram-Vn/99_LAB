//դ) թվի թվանշանները նվազման կարգով չեն դասավորված,

#include <iostream>

bool is_ascending_order(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(is_ascending_order(num)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

bool is_ascending_order(int num){
	if(num < 0){
		num = num * (-1);
	}

	while(num > 100){
		if((num % 100)/10 < num % 10){
//			std::cout << (num % 100)/10 << std::endl;
//			std::cout << num % 10 << std::endl;				
			return true;
		}
		num /= 10;
	}
//			std::cout << (num % 100)/10 << std::endl;
//			std::cout << num % 10 << std::endl;				
	return false;	

}
