#include <iostream>

int power_of_2(int num);
bool Right_triangle(int side1, int side2, int side3);

int main(){

 int side1 = 0;
 std::cout << "SIDE1" << std::endl;
 std::cin >> side1;

 int side2 = 0;
 std::cout << "SIDE2" << std::endl;
 std::cin >> side2;

 int side3 = 0;
 std::cout << "SIDE3" << std::endl;
 std::cin >> side3;

	if(Right_triangle(side1, side2, side3)){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

int power_of_2(int num){
	return num * num;
}

bool Right_triangle(int side1, int side2, int side3){

	int tmp = 0;

	if(side2 > side1){
		tmp = side1;
		side1 = side2;
		side2 = tmp;
	}

	if(side3 > side1){
		tmp = side1;
		side1 = side3;
		side3 = tmp;
	}

	/* std::cout << side1 << std::endl; */
	/* std::cout << side2 << std::endl; */
	/* std::cout << side3 << std::endl; */
	/* std::cout << power_of_2(side1) << std::endl; */
	/* std::cout << (power_of_2(side2) + power_of_2(side3)) << std::endl; */

	if(power_of_2(side1) == (power_of_2(side2) + power_of_2(side3))){
		return true;
	}
	return false;
}
