//Իրականացնել ռեկուրսիվ ֆունկցիա, որն ընդունում է թիվ և վերադարձնում նրա թվանշանների գումարը:

#include <iostream>

int sum(int num);

int main(){
 int num = 0;
 std::cin >> num;
 
 std::cout << sum(num) << std::endl;
}

int sum(int num){

	if(num <= 0){
		return 0;
	}

	return num % 10 + sum(num /= 10);

}
