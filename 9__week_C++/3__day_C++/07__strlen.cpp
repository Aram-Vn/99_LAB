#include <iostream>

int strlen(const char* str);

int main(){
 char str[25];

 std::cin >> str;
 std::cout << str << std::endl;
 std::cout << strlen(str) << std::endl;

}
int strlen(const char* str){
	int size = 0;

	while(*str){
		++str;
		++size;
	}

	return size;
}
