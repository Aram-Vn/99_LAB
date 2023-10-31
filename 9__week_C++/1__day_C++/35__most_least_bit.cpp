#include <iostream>

bool most_least_bit(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(most_least_bit(num)){
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;
	}
}

bool most_least_bit(int num){

	char arr[33];
	int i = 0;

	while(num > 0){
		arr[i] = num % 2 + '0';
		num /= 2;
		++i;
	}

	std::cout << arr << std::endl;

	return arr[0] == arr[i - 1];

}
