#include <iostream>

void lowercase(std::string str);

int main(){

 std::string str;
 std::cin >> str;

 lowercase(str);

}

void lowercase(std::string str){

	int length = str.size();

	while(length != -1){
		str[length--] |= 32;
	}

	std::cout << str << std::endl;

}
