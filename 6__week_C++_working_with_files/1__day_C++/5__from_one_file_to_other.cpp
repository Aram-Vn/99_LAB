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

	/* while(!reader.eof()){ */
	/* 	std::getline(reader, str); */
	/* 		if(str == ""){ */
	/* 			continue; */
	/* 		} */
	/* 	add_word(str); */		
	/* 	std::cout << str << std::endl; */ 
	/* } */

	std::ofstream writer;
	
	writer.open("9_test.txt");

	if(!writer.is_open()){
		std::cout << "NOT OPEN" << std::endl;
	}

	while(!reader.eof()){
		std::getline(reader, str);
			if(str == ""){
				continue;
			}	
		add_word(str);		
		writer << str << std::endl; 
	}
	
	if(writer.is_open()){
		writer.close();
	}

	if(reader.is_open()){
		reader.close();
	}

}

void add_word(std::string& str){
	/* std::string  add = ""; */
	/* std::cout << "enter second word" << std::endl; */
	/* std::cin >> add; */
 
	str += "9999999999";
}

void replase_char(std::string& str, char ch){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ch){
			str[i] = 'O';
		}
	}
}
