#include <iostream>
#include <fstream>

void add_word(std::string& str);
void replase_char(std::string& str, char ch);

int main(){

 std::ofstream writer;
 
 writer.open("write.txt");

	if(!writer.is_open()){
		return -1;
	}

 	writer << "Hello word" << std::endl;

	if(writer.is_open()){
		writer.close();
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
