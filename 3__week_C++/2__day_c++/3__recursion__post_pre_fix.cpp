#include <iostream>

int foo(int num){

	if(num == 0){
		return 0;
	}

	return num + foo(num - 1);

}

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << foo(num) << std::endl;

}
