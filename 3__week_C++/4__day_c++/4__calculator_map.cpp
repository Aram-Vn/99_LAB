#include <iostream>
#include <map>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {

 std::map<char, double(*)(double, double)> operators_MAP;
 operators_MAP['+'] = add;
 operators_MAP['-'] = subtract;
 operators_MAP['*'] = multiply;
 operators_MAP['/'] = divide;

 double operand1 = 0; 
 double operand2 = 0;
 char operation = '0';

// std::cout << subtract << std::endl;

 std::cout << "Enter first num\n";
 std::cin >> operand1; 
 std::cout << "enter operation (+ or * or - or /)" << std::endl;
 std::cin >> operation;
 std::cout << "Enter second num\n";
 std::cin >> operand2; 

 std::cout << operators_MAP[operation](operand1, operand2) << std::endl;

	/* if(operators_MAP.find(operation) != operators_MAP.end()){ */
	/* 	double (*operationFunc)(double, double) = operators_MAP[operation]; */
	/* 	double result = operationFunc(operand1, operand2); */
	/* 	std::cout << "Result: " << result << std::endl; */
	/* } */ 
	/* else{ */
	/* 	std::cerr << "Invalid operator!" << std::endl; */
	/* } */

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
