#include <iostream>

int power_of_2(int num);
bool Right_triangle(double& side1, double& side2, double& side3);
double sinus(double side1, double& side2, double side3);

int main(){

 double side1 = 0;
 std::cout << "SIDE1" << std::endl;
 std::cin >> side1;

 double side2 = 0;
 std::cout << "SIDE2" << std::endl;
 std::cin >> side2;

 double side3 = 0;
 std::cout << "SIDE3" << std::endl;
 std::cin >> side3;
 
 std::cout << sinus(side1, side2, side3) << std::endl;
 std::cout << side2 << std::endl;
 
}

int power_of_2(int num){
	return num * num;
}

bool Right_triangle(double& side1, double& side2, double& side3){

	double tmp = 0;

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

	if(power_of_2(side1) == (power_of_2(side2) + power_of_2(side3))){
		return true;
	}
	return false;
}

double sinus(double side1, double& side2, double side3){

	if(!(Right_triangle(side1, side2, side3))){
		return -1;
	}

	side2 = side2/side1;
	return side3/side1;

}
