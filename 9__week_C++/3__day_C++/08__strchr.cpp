#include <iostream>

const char* strchr(const char* str, char ch);

int main(){
 char str[25];

 std::cin >> str;
 std::cout << str << std::endl;

 std::cout << "CH" << std::endl;
 char ch = '0';
 std::cin >> ch;

 std::cout << strchr(str, ch) << std::endl;

}

const char* strchr(const char* str, char ch){
	while(*str){
		if(*str == ch){
			return str;
		}
		++str;
	}

	return nullptr;
}
