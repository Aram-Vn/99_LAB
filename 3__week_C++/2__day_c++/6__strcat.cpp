#include <iostream>

 size_t r_len(const char* dest);
 const char* str_cat(const char* dest, const char* src, int size1, int size2);

int main(){

 const char* dest = "HELLO!";
 const char* src = "world";
 
 int size1 = r_len(dest);
 int size2 = r_len(src);

 std::cout << str_cat(dest, src, size1, size2) << std::endl;
}

const char* str_cat(const char* dest, const char* src, int size1, int size2){

 	int res_size = size1 + size2 + 1; // 6 + 5 = 11;

	char* cat = new char[res_size];

	int j = 0;
	int k = size1;

	for(int i = 0; i <= size1; ++i){
		cat[i] = dest[i]; 
	}

	for(int i = size1 ; i <= res_size; ++i){
		cat[i] = src[j];
		++j; 
	}

	cat[res_size + 1] = '\0';

	return cat;
}


size_t r_len(const char* dest){

	if(*dest == '\0'){
		return 0;
	}

	return 1 +  r_len(dest + 1);
}
