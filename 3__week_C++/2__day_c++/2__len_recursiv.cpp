#include <iostream>

 size_t r_len(const char* str);

int main(){

 const char* str = "HELLO!";

 std::cout << r_len(str) << std::endl;

}

size_t r_len(const char* str){

	if(*str == '\0'){
		return 0;
	}

	return 1 +  r_len(str + 1);
}
