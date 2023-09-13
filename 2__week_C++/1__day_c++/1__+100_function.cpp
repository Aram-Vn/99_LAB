#include <iostream>

int sum (int num){
	return num + 1;
}

int main(){

 int num = 0;
 std::cin >> num;

	for(int i = 0; i < 50 ; ++i){
		num = sum(num);
	}

 std::cout << num << std::endl;
}
