#include <iostream>

	int fib(int x){
		if(x <= 0){
			return 0;
		}
		else if(x == 1){
			return 1;
		}
		
		return fib(x - 1) + fib(x - 2);
	}

int main(){

 int index = 0;
 std::cin >> index;

 std::cout << fib(index) << std::endl;
}
