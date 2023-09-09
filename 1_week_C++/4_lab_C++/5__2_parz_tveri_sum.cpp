#include <iostream>

 bool is_prime (int num1);
 void foo (int num);

int main(){

 int num = 0;
 std::cin >> num;
 foo(num);

}

	bool is_prime (int num1){
		for(int i = 2; i <= num1 / 2; ++i){
			if( num1 % i == 0 ){
				return 0;
			}
		}
	 return 1; 
	}

	void foo (int num){
	 bool check = 1;
		for(int i = 2; i < num / 2; ++i){
			if(is_prime(i)){
				if(is_prime(num - i)){
					std::cout << i << "  " << num - i << std::endl;
					check = 0;
				}
			}
		}

		if(check){
			std::cout << "ther is no prime number sum" << std::endl;
		} 
	}

