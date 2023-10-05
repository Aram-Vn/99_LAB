//Կատարել swap գործողություն թվի i և j բիթերը տեղափոխելու համար։
//Շրջել թվի բիթերը(reverse), օրինակ՝ 11110000 -> 00001111։

#include <iostream>

void print_bin(int num);
void swap_binar(int& num, int k, int j);
void reverse_bin(int& num);

int main(){

 int num = 0;
 std::cout << "NUM\n";
 std::cin >> num;
 print_bin(num);
// std::cout << std::endl;

 int i = 0;
 int j = 0;
 
 std::cout << "I\n";
 std::cin >> i;
 
 std::cout << "J\n";
 std::cin >> j;

 swap_binar(num, i, j);
 print_bin(num);
 std::cout << std::endl;

 reverse_bin(num);
 print_bin(num);
 std::cout << std::endl;
}

void print_bin(int num){

	int shifter = (1 << 31);

	for(int i = 0; i < sizeof(int) * 8; ++i){
		std::cout << bool(num & shifter);
		num  <<=  1;
	}

	std::cout << std::endl;

}

void swap_binar(int& num, int i, int j){
	if(i < 0 || i >= 32 || j < 0 || j >= 32){
		std::cout << "NO!!" << std::endl;
		return;
	}

	if((num & (1 << i)) == (num & (1 << j))){
		return;
	}

	num ^= (1 << i);
	num ^= (1 << j);

}

void reverse_bin(int& num){

	int shifter = (1 << 31);
	int tmp = 0;
	int j = 31;

	for(int i = 0; i < (sizeof(int) * 8)/2 ; ++i){
		if(bool(num & (1 << i)) == bool(num & (1 << j))){
			--j;
			continue;
		}
		num ^= (1 << i);
		num ^= (1 << j);		
		--j;
	}

}
