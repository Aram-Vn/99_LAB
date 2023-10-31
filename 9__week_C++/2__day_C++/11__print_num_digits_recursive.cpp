//Իրականացնել ռեկուրսիվ ֆունկցիա, որը որպես արգումենտ կստանա թիվ, և տպել թվի թվանշանները առանձին առանձին էկրանին։ Օրինակ՝ մուտքագրված 5479 թվի համար տպել ‘5’, ‘4’, ‘7’, ‘9’։

#include <iostream>

void printd(int num);

int main(){
 int num = 0;
 std::cin >> num;
 
 printd(num);
 std::cout << std::endl;
}

void printd(int num){

	if(num <= 0){
		return;
	}

    printd(num / 10);
	std::cout << num % 10 << " ";
}
