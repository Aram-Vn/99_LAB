#include <iostream>

std::string add_word(std::string str);

int main(){

 std::string str = "";

 std::cin >> str;
 
 str = add_word(str);
 
 std::cout << str << std::endl;

 /* int size = */
}

std::string add_word(std::string str){
	std::string  add = "";
	std::cout << "enter second word" << std::endl;
	std::cin >> add;
 
	str += add;
	/* str += "something"; */
	return str;
}
