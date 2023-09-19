#include <iostream>
#include <cstring>


 const char* str_chr(const char* str, char c);

int main(){

 const char* str = "Hello!!";
 char c = 'l';
 std::cin >> c;

 std::cout << *(str_chr(str , c)) << std::endl;

 const char* ptr = str_chr(str, c);
 std::cout << (const void*) ptr << std::endl;

}

const char* str_chr(const char* str, char c){

	int len = 0;

	while(str[len] != '\0'){
		++len;
	}

	for(int i = 0; i <= len; ++i){
		if(str[i] == c){
			return &str[i];
		}
	}
	return nullptr;
}
