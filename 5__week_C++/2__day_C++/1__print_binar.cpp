//տպումա թվի 2֊ական տեսքը 32բիթ֊ում

#include <iostream>

void print_bin(int num);

int main(){

 int num = 0;
 std::cin >> num;
 print_bin(num);
 
}

void print_bin(int num){

	int shifter = (1 << 31);

	for(int i = 0; i < sizeof(int) * 8; ++i){
		std::cout << bool(num & shifter);
		num  <<=  1;
	}

	std::cout << std::endl;

}
