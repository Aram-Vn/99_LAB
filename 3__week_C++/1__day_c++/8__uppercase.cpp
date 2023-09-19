#include <iostream>

void uppercase(std::string str);

int main(){

 std::string str;
 std::cin >> str;

 uppercase(str);

}

void uppercase(std::string str){

	int length = str.size();

	while(length != -1){
		str[length--] &= 223;
	}

	std::cout << str << std::endl;

}
