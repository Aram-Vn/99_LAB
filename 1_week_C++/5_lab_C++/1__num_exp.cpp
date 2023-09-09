#include <iostream>

 float  power(int num , int pow){
 
	float res = num;
	bool check = 0;

	if( pow == 0 ){
		return 1;
	}

	if( pow < 0){
		pow *= -1;
		check = 1;
	}

	for( int i = 1 ;i < pow; ++i){
		res *=  num;
	}

	if( check ){
		return 1/res;
	}
	else{
		return res;
	}
 }

int main(){

 int num = 0;
 int pow = 0;

 std::cout << "NUM\n";
 std::cin >> num;
 
 std::cout << "POW\n";
 std::cin >> pow;

 float res = power(num , pow);
	
 std::cout << "***\n" << res << std::endl;
}
