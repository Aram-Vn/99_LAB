#include <iostream>

int amount_of_1(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << amount_of_1(num) << std::endl;

}

int amount_of_1(int num){
	int count = 0;
	int size = sizeof(int) * 8;

	while(true){
		if(num == -1){
			count = count + size;
			break;
		}

		--size;

		if(num & 1 == 1){
			++count;
		}

		num = num >> 1;

	}
	return count;
}
