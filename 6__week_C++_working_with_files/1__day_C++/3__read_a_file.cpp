#include <iostream>
#include <fstream>

void add_word(std::string& str);
void replase_char(std::string& str, char ch);

int main(){

 std::fstream reader;
 
 reader.open("text.txt");

	if(!reader.is_open()){
		return -1;
	}

 std::string str;

	while(!reader.eof()){
		std::getline(reader, str);
			if(str == ""){
				continue;
			}
		add_word(str);		
		std::cout << str << std::endl; 
	}

	if(reader.is_open()){
		reader.close();
	}

}

void add_word(std::string& str){
	std::string  add = "";
	std::cout << "enter second word" << std::endl;
	std::cin >> add;
 
	str += add;
}

void replase_char(std::string& str, char ch){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ch){
			str[i] = 'O';
		}
	}
}
