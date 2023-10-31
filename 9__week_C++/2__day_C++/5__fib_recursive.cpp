//Իրականացնել ռեկուրսիվ ֆունկցիա, որը ստանում է ամբողջ թվային պարամետր և վերադարձնում է n-րդ Ֆիբոնաչիի թիվը։

#include <iostream>

int fib(int num);

int main(){
 int num = 0;
 std::cin >> num;
 
 std::cout << fib(num) << std::endl; 
}

int fib(int num){
	if(num <= 0){
			return 0;
		}
		else if(num == 1){
			return 1;
		}
		
		return fib(num - 1) + fib(num - 2);

}
