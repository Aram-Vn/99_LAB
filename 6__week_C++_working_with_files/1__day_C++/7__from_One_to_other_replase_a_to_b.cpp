#include <iostream>
#include <fstream>

void replase_char(std::string& str);

int main(){

 std::fstream reader;
 
 reader.open("text.txt");

	if(!reader.is_open()){
		return -1;
	}

 std::string str;

	std::ofstream writer;
	
	writer.open("text.txt.replace");

	if(!writer.is_open()){
		std::cout << "NOT OPEN" << std::endl;
	}

	while(!reader.eof()){
		std::getline(reader, str);
			if(str == ""){
				continue;
			}	
	 	replase_char(str);		
		writer << str << std::endl; 
	}
	
	if(writer.is_open()){
		writer.close();
	}

	if(reader.is_open()){
		reader.close();
	}

}


void replase_char(std::string& str){
	for(int i = 0; i < str.size(); ++i){
		if(str[i] == 'a'){
			str[i] = 'b';
		}
	}
}
