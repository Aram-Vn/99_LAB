#include <iostream>

int main(){

	static int i = 0;
	++i;
	std::cout << i << std::endl;

	if(i > 19){
		return 0;
	}

	return main();
}
