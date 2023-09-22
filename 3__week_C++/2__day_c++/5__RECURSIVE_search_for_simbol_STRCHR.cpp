#include <iostream>
#include <cstring>


const char* str_chr(const char* str, char c, int len);
int r_len(const char* str); 

int main(){

 const char* str = "Hello!!";
 char c = 'l';
 std::cin >> c;

 int len = r_len(str);

 std::cout << *(str_chr(str , c, len)) << std::endl;

 const char* ptr = str_chr(str, c, len);
 std::cout << (const void*) ptr << std::endl;

}

int r_len(const char* str){ 
	if(*str == '\0'){
		return 0;
	}
	
	return 1 + r_len(str + 1);
}

const char* str_chr(const char* str, char c, int len) {

	if(str[len] == c){
		return &str[len];
	}

	if(len < 0){
		return nullptr;
	}

	return str_chr(str, c, len - 1);
}
