#include <iostream>
#include <fstream>

void replase_char(std::string& str);

int main(){

 std::ifstream reader;

 reader.open("new.txt"); 
	
	if(!reader.is_open()){
		std::cout << "File is not open" << std::endl;
		return -1;	
	}

 std::string str;

 std::ofstream writer;

 writer.open("new_res.txt");

	if(!writer.is_open()){
		std::cout << "File si not open" << std::endl;
		return -1;	
	}

	while(!reader.eof()){
		std::getline(reader, str);
		if(str == ""){
			continue;
		}
		replase_char(str);
		writer << str << std::endl;
	}

	if(reader.is_open()){
		reader.close();
	}

	if(reader.is_open()){
		reader.close();
	}

}


void replase_char(std::string& str){

 int size = str.length();
 int num = 0;
 std::string res = "";

	for(int i = 0; i < size; i += 2){

		if(str[i + 2] >= 'a' && str[i + 2]){		
			num = (str[i + 1] - '0');
		}
		else{

		}

		for(int j = 0; j < num; ++j){
			res += str[i];
		}
	}
	str = res;
}
