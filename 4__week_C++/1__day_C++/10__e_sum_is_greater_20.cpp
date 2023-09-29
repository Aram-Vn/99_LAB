//ե) թվի թվանշանների գումարը մեծ է քսանից,

#include <iostream>

bool sum_gr_20(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(sum_gr_20(num)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

bool sum_gr_20(int num){

int sum = 0;

	while(num > 0){
		sum += num%10;
		num /= 10;
	}
	if(sum > 20){
		return true;
	}
	return false;
}
