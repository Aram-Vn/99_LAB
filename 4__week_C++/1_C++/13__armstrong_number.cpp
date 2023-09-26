//n թվանշան ունեցող բնական թիվը կոչվում է Արմսթրոնգի թիվ, եթե նրա թվանշանների n աստիճանների գումարը հավասար է այդ թվին (օրինակ՝ 153=1^3 +5^3 +3^3 ): Ներմուծել թիվ, արտածել YES եթե այն հանդիսանում է Արմսթրոնգի թիվ, և NO հակառակ դեպքում

#include <iostream>

bool is_armstrong_number(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(is_armstrong_number(num)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

bool is_armstrong_number(int num){

	int count = 0;
	int tmp = num;

	while(tmp > 0){
		tmp /= 10;
		++count;
	} 

	int armstrong = 0;
	int res = 1;
	int digit = 0;
	tmp = num;

	while(tmp > 0){
		digit = tmp % 10;
			for(int i = 0; i < count; ++i){
				res *= digit;
			}
		armstrong  = armstrong  + res;
		digit = 0;
		res = 1;
		tmp /= 10;
	}

	if(num == armstrong ){
		return true;
	}
	else{
		return false;
	}
}
