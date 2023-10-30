#include <iostream>

bool is_prime(int num);

int main(){

 int num = 0;
 std::cin >> num;
 
	if(is_prime(num)){
		std::cout << "YES\n";
	} else {
		std::cout << "NO\n";
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
