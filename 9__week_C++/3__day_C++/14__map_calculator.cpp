//Իրականացնել հաշվիչ ծրագիր, որն օգտագործում է std::map և ֆունկցիայի ցուցիչներ։ Ֆունկցիայի ցուցիչները հղվում են համապատասխան թվաբանական գործողությունը կատարող ֆունկցիայի վրա։

#include <iostream>
#include <map>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){

std::map <char, double(*)(double, double)> operators_MAP;
	operators_MAP['+'] = add;
	operators_MAP['-'] = subtract;
	operators_MAP['*'] = multiply;
	operators_MAP['/'] = divide;

 double num1 = 0;
 double num2 = 0;
 char operation = '0';

 std::cout << "Enter first num\n";
 std::cin >> num1; 
 std::cout << "enter operation (+ or * or - or /)" << std::endl;
 std::cin >> operation;
 std::cout << "Enter second num\n";
 std::cin >> num2; 

 std::cout << operators_MAP[operation](num1, num2) << std::endl;
}


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Can't divide by zero!" << std::endl;
		exit(1);
    }
}
