#include <iostream>

int deg(int num, int exp);
int nshan(int num);
double factorial(int num);
double gumar(double n, double x);

int main(){

 double n = 0;
 std::cout << "n" << std::endl;
 std::cin >> n;

 double x = 0;
 std::cout << "x" << std::endl;
 std::cin >> x;

 std::cout << gumar(n, x) << std::endl;

}

int deg(int num, int exp){
	int res = 1;

	for(int i = 0; i < exp; ++i){
		res *= num;
	}
	return res;

}

int nshan(int num){

	if(num % 2 != 0){
		return -1;
	}
	return 1;
}

double factorial(int num){
	double res = 1;

	for(int i = 2; i <= num; ++i){
		res *= i;
	}
	return res;
}


double gumar(double n, double x){
	
	double res = 0;

	for(int i = 1; i <= n; ++i){
		res += nshan(i) * ( (deg(x, i + 1)) / ( (factorial(3 * i) + deg(2 , i + 1))));
	}

	return res;
}
