//Գրել void flip(int n, int i), որը տրված n թվի i-րդ բիթը  կշրջի, այսինքն 1-ը կդարձնի 0, 0-ն կդարձնի 1;

#include <iostream>

void replase_index(int& num, int index);

int main(){

 int num = 0;
 std::cout << "num\n";
 std::cin >> num;

 int index = 0;
 std::cout << "index\n";
 std::cin >> index;

 replase_index(num, index);

 std::cout << "******\n" << num << std::endl;

}

void replase_index(int& num, int index){
 
 	if(index < 0 || index > (sizeof(int) * 8 ) - 1){
		std::cout << "NO!!" << std::endl;
		num = -1;
		return;
	}

	num ^= (1 << index);

}
