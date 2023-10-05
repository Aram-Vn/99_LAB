//1֊երի քանակը մենակ դրական թվերի համար

#include <iostream>

int amount_of_1(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << amount_of_1(num) << std::endl;

}

int amount_of_1(int num){
	int count = 0;

	while(num){
		if(num & 1 == 1){
			++count;
		}
		/* if(num % 2 != 0){ */
		/* 	++count; */
		/* } */
		num = num >> 1;
	}
	return count;
}
