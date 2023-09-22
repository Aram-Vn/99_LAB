#include <iostream>
 
void str_cat(char* dest, const char* src);

int main(){

 char dest[100] = "HELLO!";
 const char* src = "world";

 str_cat(dest, src);
 std::cout << dest << std::endl;
}

void str_cat(char* dest, const char* src){

	if(*dest == '\0'){
		while(*src){
			*dest = *src;
			++dest;
			++src;
		}
		*dest = '\0';
	}
	else{
		str_cat(dest + 1, src);
	}
	
}
