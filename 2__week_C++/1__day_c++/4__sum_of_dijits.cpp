#include <iostream>

int foo(int num){
 
	if(num == 0){	
		return 0;
	}
//									       
//	int digit = num % 10;	           ||    
//  	return digit + foo(num / 10);  || 2-rd tarberak

	return (num % 10) + foo(num / 10);
}
	
int main(){

 int num = 0;
 std::cin >> num;
 std::cout << foo(num) << std::endl;

}
