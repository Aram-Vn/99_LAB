#include <iostream>
	
int split(char* str);
	
int main(){
	
 char str[55] = "        sdf rfgh scvvv  a a a    ";
 	
 std::cout << split(str) << std::endl;
}	
	
int split(char* str){
	
	int count = 0;
	
	if(*str != ' '){
		++count;
	}
	
	while(*str){
		if(*str == ' ' && *(str + 1) != ' ' && *(str + 1) != '\0'){
			++count;
		}
		++str;
	}
	return count;
}	
