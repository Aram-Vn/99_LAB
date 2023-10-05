//1֊երի քանակը բացասական թվերի համար

#include <iostream>

int amount_of_1(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << amount_of_1(num) << std::endl;

}

int amount_of_1(int num){
	int loop = sizeof(int) * 8;
	int count = 0;

	while(loop){
		--loop;
		if(num & 1 == 1){
			++count;
		}

		num = num >> 1;

	}
	return count;
}
