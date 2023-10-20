#include <iostream>

int main(){

	const char* ch = "123";

	int tmp = 0;
	
	while(ch[tmp]){
		++tmp;
	}

	std::cout << tmp << std::endl;
	std::cout << ch << std::endl;
}
