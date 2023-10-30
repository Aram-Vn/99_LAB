#include <iostream>

int patik(int num);
void print_dig(int num);

int main(){
 int num = 0;
 std::cin >> num;

 print_dig(num);
}

int patik(int num){
	int res = 1;
	
	while(num > 10){
		res *= 10;
		num /= 10;
	}

	return res;
}


void print_dig(int num){
	int pat = patik(num);

	while(num > 0){
		std::cout << num / pat << " ";
		num -= ( (num / pat) * pat );
		pat /= 10;
	}
	std::cout << std::endl;
}
