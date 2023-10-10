#include <iostream>
#include <fstream>

void hasher(std::string& str, int kee);

int main(){

 int kee = 0;
 std::cout << "enter kee" << std::endl;
 std::cin >> kee;

 std::ifstream reader;

 reader.open("result.txt"); 
	
	if(!reader.is_open()){
		std::cout << "File si not open" << std::endl;
		return -1;	
	}

 std::string str;

 std::ofstream writer;

 writer.open("pass.txt");

	if(!writer.is_open()){
		std::cout << "File si not open" << std::endl;
		return -1;	
	}

	while(!reader.eof()){
		std::getline(reader, str);
		if(str == ""){
			continue;
		}
		hasher(str, kee);
		writer << str << std::endl;
	}

	if(reader.is_open()){
		reader.close();
	}

	if(reader.is_open()){
		reader.close();
	}

}


void hasher(std::string& str, int kee){
	for(int i = 0; i < str.length(); ++i){
		if((str[i]^kee ) == '\n'){
			str[i] ^= kee - 5;
			continue;
		}
		str[i] ^= kee;
	}

}
