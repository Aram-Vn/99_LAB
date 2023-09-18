#include <iostream>

 int x = 10;

int main(){
 

 int x = 20;
// int* ptr = &x;

	{
		int x = 30;
	}
    
	std::cout << ::x << " " << x << " " << *(&x + 1) << std::endl;

}
