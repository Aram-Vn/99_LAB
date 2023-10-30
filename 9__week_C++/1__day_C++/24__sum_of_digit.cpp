#include <iostream>

int sum(int num);

int main(){
	
 int num = 0;
 std::cin >> num;
 
 std::cout << sum(num) << std::endl;

}

int sum(int num){
	int res = 0;	

	while(num > 0){
		res += num % 10;
		num /= 10;
	}

	return res;
}
