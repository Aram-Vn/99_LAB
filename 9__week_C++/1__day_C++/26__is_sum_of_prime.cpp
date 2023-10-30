#include <iostream>

bool is_prime(int num);
bool is_sum_prime(int num); 

int main(){

 int num = 0;
 std::cin >> num;

	if(is_sum_prime(num)){
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;
	}
 
}

bool is_prime(int num){
	if(num <= 1){
		return false;
	}

	for(int i = 2; i < num / 2 + 1; ++i){
		if(num % i == 0){
			return false;
		}
	}

	return true;
}

bool is_sum_prime(int num){
	if(num <= 2){
		return false;
	}

	for(int i = 2; i < num / 2; ++i){
		if(is_prime(i)){
			if(is_prime(num - i)){
				std::cout << i << "  " << num - i << std::endl;
				return true;
			}
		}
	}

	return false;
}
