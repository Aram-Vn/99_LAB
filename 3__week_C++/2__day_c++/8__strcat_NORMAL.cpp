#include <iostream>

 size_t r_len(const char* dest);
 void str_cat(char* dest, const char* src, int size1);

int main(){

 char dest[100] = "HELLO!";
 const char* src = "world";
 
 int size1 = r_len(dest);
 int size2 = r_len(src);

// std::cout << str_cat(dest, src, size1) << std::endl;
 str_cat(dest, src, size1);
 std::cout << dest << std::endl;
}

void str_cat(char* dest, const char* src, int size1){

	dest += size1;

	while(*src){
		*(dest) = *(src);
		dest += 1;
		src += 1;
	}
	*(dest) = '\0';
}

size_t r_len(const char* dest){

	if(*dest == '\0'){
		return 0;
	}

	return 1 +  r_len(dest + 1);
}
