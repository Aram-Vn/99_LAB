//1֊երի քանակը մենակ դրական թվերի հանժմար ռեկուրսիվ

#include <iostream>

int amount_of_1(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << amount_of_1(num) << std::endl;

}

int amount_of_1(int num){
	if(num == 0){
		return 0;
	}	
	
	return (num & 1) + (amount_of_1(num >> 1));
}
