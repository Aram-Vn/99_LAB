#include <iostream>

int log_2(int num, int himq);

int main(){

 int num = 0;
 std::cout << "NUM\n";
 std::cin >> num;
 
 int himq = 0;
 std::cout << "HIMQ\n";
 std::cin >> himq;

 std::cout << "******" << std::endl;
 std::cout << log_2(num, himq) << std::endl;
}

int log_2(int num, int himq){
	int res = 1;

	if(num < 0){
		return -1;
	}

	for(int i = 1 ; i <= (num + 1) / 2; ++i){
		res *= himq;

		if(res == num){
			return i;
		}
	
		if(num < res){
			return --i;
		}		
	}

	return -1;
}
