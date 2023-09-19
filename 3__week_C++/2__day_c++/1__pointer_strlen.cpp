#include <iostream>
#include <cstring>

int str_len(const char* str);

int main(){

 const char* str = "Hello!";

 std::cout << strlen(str) << std::endl;

 std::cout << "****\n";

 std::cout << str_len(str) << std::endl;
 
}

int str_len(const char* str){

 int len = 0;
	
	while(str[len] != '\0'){
		++len;
	}

	return len;
}
