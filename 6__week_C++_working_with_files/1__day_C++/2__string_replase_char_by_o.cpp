#include <iostream>

std::string add_word(std::string str);
std::string replase_char(std::string str, char ch);


int main(){

 std::string str = "";
 std::cin >> str;
 
 str = add_word(str);
 std::cout << str << std::endl;

 char ch = 'a';
 std::cout << "enter char" << std::endl;
 std::cin >> ch;
 
 str = replase_char(str, ch);
 std::cout << str << std::endl;
}

std::string add_word(std::string str){
	std::string  add = "";
	std::cout << "enter second word" << std::endl;
	std::cin >> add;
 
	str += add;
	return str;
}

std::string replase_char(std::string str, char ch){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ch){
			str[i] = 'O';
		}
	}

	return str;
}
