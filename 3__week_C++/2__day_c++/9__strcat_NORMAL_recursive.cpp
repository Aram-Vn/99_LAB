#include <iostream>
 
void str_cat(char* dest, const char* src);

int main(){

 char dest[100] = "HELLO!";
 const char* src = "world";

 str_cat(dest, src);
 std::cout << dest << std::endl;
}

void str_cat(char* dest, const char* src){

	if(*src == '\0'){
		*dest = '\0';
		return;
	}

	if(*dest == '\0'){
		str_cat(dest + 1, src + 1);
		*dest = *src;
	}
	else{
		str_cat(dest + 1, src);
	}
	
}
