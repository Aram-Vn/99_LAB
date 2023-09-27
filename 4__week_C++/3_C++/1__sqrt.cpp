#include <iostream>

int sqrt_1(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << sqrt_1(num) << std::endl;
}

int sqrt_1(int num){
	if(num < 0){
		return -1;
	}

	if(num >= 1 && num <= 3 ){
		return 1;
	}

	for(int i = 2; i <= (num + 1) / 2; ++i){
		if(i * i == num){
			return i;
		}
		if(i * i > num){
			return --i;
		}
	}

	return -1;
}
