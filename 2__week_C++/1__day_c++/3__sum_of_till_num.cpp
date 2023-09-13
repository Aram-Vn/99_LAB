#include <iostream>

int foo(int x){

	if(x == 1){
		return 1;
	}

	return x + foo(x + 1);

}

int main(){

 int num = 5;
std::cout << foo(num) << std::endl;
}
