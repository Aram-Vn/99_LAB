#include <iostream>

void print_bin(int num, int i);

int main(){

 int num = 0;
 std::cin >> num;
 print_bin(num, 32);
 std::cout << std::endl; 
 /* std::cout << (1u << 31) << "YES" << std::endl; */
}

void print_bin(int num, int i){

	if(i == 0){
		return;
	}


	std::cout << bool(num & (1 << 31));
	print_bin (num << 1, i - 1);

}
