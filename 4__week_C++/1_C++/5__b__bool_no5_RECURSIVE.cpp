//բ) թվի թվանշանների մեջ չկա 5 թվանշան,

#include <iostream>

bool no_5(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(no_5(num)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}

}

bool no_5(int num){
	if(num < 0){
		num =  num * (-1);
	}

	if(num <= 0){
		return true;
	}	

	if(num % 10 == 5){
		return false;
	}
	
	no_5(num /= 10);
}
