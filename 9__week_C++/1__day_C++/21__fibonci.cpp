#include <iostream>

int fib(int index);

int main(){

 int index = 0;
 std::cin >> index;

 std::cout << fib(index) << std::endl;
}

int fib(int index){
	int first = 0;
	int second = 1;
 	int tmp = 0;

	for(int i = 1; i < index; ++i){
		tmp = second;
		second += first;
		first = tmp; 
	}

	return first;
}
