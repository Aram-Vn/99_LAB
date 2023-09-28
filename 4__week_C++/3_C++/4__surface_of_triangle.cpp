#include <iostream>

int sqrt_1(int num);
bool is_triangle(int side1,int side2,int side3);
int kisapar(int side1,int side2,int side3);
int makeres(int side1,int side2,int side3);

int main(){

 int side1 = 0;
 std::cout << "side1\n";
 std::cin >> side1;

 int side2 = 0;
 std::cout << "side2\n";
 std::cin >> side2;

 int side3 = 0;
 std::cout << "side3\n";
 std::cin >> side3;

 std::cout << "********\n";
 std::cout << "surface of triangle id: " << makeres(side1, side2, side3) << std::endl;
}

bool is_triangle(int side1,int side2,int side3){
	if((side1 <= 0) || (side2 <= 0) || (side3 <= 0)){
		std::cout << "NO side need to be > 0!!!" << std::endl;
		return false;
	}

	return (side1 + side2 > side3 && side2 + side3 > side1 &&  side1 + side3 > side2);

}


int kisapar(int side1,int side2,int side3){

	return (side1 + side2 + side3) / 2;

}


int sqrt_1(int num){
	if(num < 0){
		return -1;
	}

	if(num >= 1 && num <= 3 ){
		return 1;
	}

	for(int i = 2; i <= (num + 1) / 2; ++i){
		if(i * i == num){
			return i;
		}
		if(i * i > num){
			return --i;
		}
	}

	return -1;
}

int makeres(int side1,int side2,int side3){
	if(!(is_triangle(side1, side2, side3))){
		std::cout << "NO sum of 2 sides need to be < than 3-rd side!!!" << std::endl;
		return -1;
	}
	
	int p = kisapar(side1, side2, side3);

	return(sqrt_1(p*(p - side1)*(p - side2)*(p - side3)));
}
