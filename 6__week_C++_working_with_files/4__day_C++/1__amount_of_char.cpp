#include <iostream>

void foo (std::string str);

int main(){

 std::string str = "0";
 std::cin >> str,

 foo(str);
}

void foo (std::string str){

int arr[26];
	
	for(int i = 0; i < 26; ++i){
		arr[i] = 0;
	}

	for(int i = 0; i < str.size(); ++i){
		arr[str[i] - 97] += 1;
	}

	char ch = 'a';

	for(int i = 0; i < 26; ++i){
		std::cout << ch << arr[i] << " ";
		++ch;
	}

 std::cout << std::endl;
	
}
