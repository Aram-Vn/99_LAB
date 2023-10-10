#include <iostream>
#include <fstream>
void replase_char(std::string& str);

int main(){

 std::ifstream reader;

 reader.open("str.txt"); 
	
	if(!reader.is_open()){
		std::cout << "File is not open" << std::endl;
		return -1;	
	}

 std::string str;

 std::ofstream writer;

 writer.open("new.txt");

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
 int count = 1;
 int k = 0;
 char res[size];
 /* std::string res = ""; */

	for(int i = 0; i <= size; ++i){
		if(str[i] == str[i + 1]){
			++count;
			res[k] = str[i];
		}
		else if(str[i] != str[i - 1] && str[i] != str[i + 1]){
			count = 1;
			res[k] = str[i];
			res[k + 1] = '0' + count;
			k += 2;
		}
		else{
			res[k + 1] = '0' + count;
			k += 2;
			count = 1;
		}
	}
	str = res;
}
