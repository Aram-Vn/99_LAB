#include <iostream>

 int GCD (int num1, int num2);

int main(){
 
 int num1 = 0;
 std::cin >> num1;
 
 int num2 = 0;
 std::cin >> num2;

 std::cout << GCD(num1, num2) << std::endl;
}

int GCD (int num1, int num2){

	if(num2 != num1){
		if(num1 > num2){
			return GCD(num1 - num2, num2);
		}
		else{
			return GCD(num1, num2 - num1); 
		}
	}
	else{
		return num1;
	}
}
