//Գրել ռեկուրսիվ ֆունկցիա, որը որպես արգումենտ կստանա տող և կստուգի տողը palindrome է, թե ոչ։

#include <iostream>

bool is_polindrome(char* str);

int main(){

 char str[25];
 std::cin >> str;

	if(is_polindrome(str)){
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO!" << std::endl;
	}
}

int sizestr(char* str){
	int size = 0;

	while(str[size]){
		++size;
	}

	return size;
}

bool is_polindrome(char* str){
	int size = sizestr(str);

	if(size <= 1){
		return true;
	}

	if(str[0] == str[size - 1]){
		return(str + 1);
	}

	return false;
}
