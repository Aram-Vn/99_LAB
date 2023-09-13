#include <iostream>

	int factorial(int num){
		if(num <= 0){
			return 1;
		}
			
		return num * factorial(num - 1);
	}

int main(){

 int num = 0;
 std::cin >> num;
 std::cout << factorial(num) << std::endl; 

}
