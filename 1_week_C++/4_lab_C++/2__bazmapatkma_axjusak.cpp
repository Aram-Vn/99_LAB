#include <iostream>

	void bazm(int num);

int main() {

 int num = 0;
 std::cin >> num;
 std::cout << "********\n";
 bazm(num);

}

	void bazm(int num) {
		for (int i = 1; i <= 10; ++i) {
	   		 std::cout << num << " * " << i <<  " = " << num * i << std::endl;
		}
	}
