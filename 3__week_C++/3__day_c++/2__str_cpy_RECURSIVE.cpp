#include <iostream>

void strcpy(char* dest, const char* str);

int main(){

 char dest[25];
 const char* str = "Hello!";

 strcpy(dest, str);

 std::cout << dest << std::endl;
}

void strcpy(char* dest, const char* str){

	if(!(*str)){
		*(dest) = '\0'; 
		return;
	}

	*(dest) = *(str);

	strcpy(dest + 1, str + 1);

}
