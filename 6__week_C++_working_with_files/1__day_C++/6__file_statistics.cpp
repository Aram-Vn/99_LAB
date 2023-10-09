#include <iostream>
#include <fstream>

int word_count(std::string str);
int simbol_count(std::string str);

int main(){

 std::fstream reader;
 
 reader.open("text.txt");

	if(!reader.is_open()){
		return -1;
	}

 std::string str;
 int line_count = 0;
 int word_c = 0;
 int simbol_c = 0;

	while(!reader.eof()){
		std::getline(reader, str);
			if(str == ""){
				continue;
			}
		++line_count;
		word_c += word_count(str);
		simbol_c += simbol_count(str);
	}
	

	if(reader.is_open()){
		reader.close();
	}

 std::cout << "word_c " << word_c << std::endl;
 std::cout << "line_count " << line_count << std::endl;
 std::cout << "simbol_count " << simbol_c << std::endl;
}

int word_count(std::string str){
	int word_c = 0;

	if(str[0] != ' ' && str[0] != '\0'){
		++word_c;
	}

	for(int i = 0; i < str.size(); ++i){
		if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\n'){
			++word_c;
		}		
	}
	return word_c;
}

int simbol_count(std::string str){
	int simbol_c = 0;

	for(int i = 0; i < str.size(); ++i){	
		if(str[i] != ' ' && str[i] != '\n'){
			++simbol_c;
		}
	}

	return simbol_c;
}
