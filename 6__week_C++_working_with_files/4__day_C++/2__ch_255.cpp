#include <iostream>

int main(){

	for(unsigned char ch = 1; ch <= 255; ++ch){
		if(int(ch) == 1 || int(ch) == 253){
			continue;
		}
		std::cout << int(ch); 
	}

}
