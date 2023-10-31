//Իրականացնել ռեկուրսիվ ֆունկցիա, որը հաշվում է երկու թվերի ամենամեծ ընդհանուր բաժանարարը։

#include <iostream>

int GCD(int num, int num2);

int main(){
 int num = 0; 
 int num2 = 0;
 
 std::cin >> num;
 std::cin >> num2;

 std::cout << GCD(num, num2) << std::endl;
}

int GCD(int num, int num2){

	if(num2 == 0){
		return num;
	}
	
	return GCD(num2, num % num2);
	
}
