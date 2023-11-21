#include <iostream>

int log_2(int num);
int log_bin(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << "********\n";
 
 std::cout << log_bin(num) << " bin " << std::endl;
 std::cout << log_2(num) << " loop "<<std::endl;

}

int log_2(int num){
	int res = 1;

	if(num < 0){
		return -1;
	}


	for(int i = 1 ; i <= (num + 1) / 2; ++i){
		res *= 2;
		if(res == num){
			return i;
		}
	
		if(num < res){
			return --i;
		}		
	}

	return -1;
}

int log_bin(int num){
	if(num < 0){
		return -1;
	}

	if(num == 1){
		return 0;
	}

	for(int i = 1 ; num > 1 ; ++i){
	
		if(num == 2){
			return i;
		}
	
		num = num >> 1;

		if(num <= 1){
			return i;
		}	
	}

	return -1;
}
