#include <iostream>

 void str_cat(char* dest, const char* src);

int main(){

 char dest[100] = "HELLO!";
 const char* src = "world";
 
 str_cat(dest, src);
 std::cout << dest << std::endl;
}

void str_cat(char* dest, const char* src){

	while(*dest){
		++dest;
	}

	while(*src){
		*(dest) = *(src);
		dest += 1;
		src += 1;
	}
	*(dest) = '\0';
}

