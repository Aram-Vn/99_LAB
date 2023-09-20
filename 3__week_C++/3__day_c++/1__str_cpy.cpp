#include <iostream>

void strcpy(char* dest, const char* str);

int main(){

 char dest[25];
 const char* str = "Hello!";

 strcpy(dest, str);

 std::cout << dest << std::endl;
}

void strcpy(char* dest, const char* str){

	while(*str){
		*(dest) = *(str);
		dest += 1;
		str += 1;
	}

	*(dest) = '\0'; 
}
