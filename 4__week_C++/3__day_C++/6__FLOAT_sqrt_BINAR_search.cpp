#include <iostream>

double sqrt_1(double num);

int main() {
 double num = 0;
 std::cin >> num;

 std::cout << sqrt_1(num) << std::endl;
}

double sqrt_1(double num){
    if (num < 0) {
        std::cout << "num needs to be >= 0" << std::endl;
        return -1;
    }

    if (num == 0 || num == 1){
        return num;
    }

    double start = 0;
    double end = num / 2;
    double mid = 0;
    /* double epsilon = 1e-7; */ 
    double epsilon = 0.000000001;

    while (end - start > epsilon){ 
        mid = (start + end) / 2;

        if (mid * mid > num){
            end = mid;
        } 
		else{
            start = mid;
        }
    }

	return mid;
}
