//Գրել ֆունկցիա, որը կստանա n թիվ։ Եթե n թվի թվանշանները դասավորված են աճման կարգով, վերադարձնել true, հակառակ դեպքում false

#include <iostream>

bool is_ascending_order(int num);

int main(){
 int num = 0;
 std::cin >> num;

	if(is_ascending_order(num)){
		std::cout << "YES!" << std::endl;
	} else {
		std::cout << "NO!" << std::endl;
	}
}

bool is_ascending_order(int num){

	while(num > 0){
		if((num % 100)/10 > num % 10){
			return false;
		}
		num /= 10;
	}

	return true;
}
