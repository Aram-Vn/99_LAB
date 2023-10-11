#include <iostream>
#include <fstream>

bool str_cmp(std::string str1, std::string str2);

int main(){

 std::ifstream reader_f1;
 std::ifstream reader_f2;
 
 reader_f1.open("text1.txt");
 reader_f2.open("text2.txt");

	if(!reader_f1.is_open()){
		std::cout << "text1.txt is not open" << std::endl;
		return -1;
	}
	
	if(!reader_f2.is_open()){
		std::cout << "text2.txt is not open" << std::endl;
		return -1;
	}
 std::string str_1 = "";
 std::string str_2 = "";

 std::ofstream writer;

 writer.open("result.txt");

	if(!writer.is_open()){
		std::cout << "result.txt is not open!" << std::endl;
	}

 int count = 0;

	while(!reader_f1.eof() || !reader_f2.eof()){
		++count;

		if(reader_f1.eof()){
			std::getline(reader_f2, str_2);
			writer << count << ") " << str_2 << std::endl;
			continue;
		}

		if(reader_f2.eof()){
			std::getline(reader_f1, str_1);
			writer << count << ") " << str_1 << std::endl;
			continue;
		}

		std::getline(reader_f2, str_2);
		std::getline(reader_f1, str_1);

		if(!str_cmp(str_1, str_2)){
			writer << count << ") " << str_1 << std::endl;
			writer << count << ") " << str_2 << std::endl;
		}
	}

	if(reader_f1.is_open()){
		reader_f1.close();
	}
	
	if(reader_f2.is_open()){
		reader_f2.close();
	}
	
	if(writer.is_open()){
		writer.close();
	}
}


bool str_cmp(std::string str1, std::string str2){
	if(str1.size() != str2.size()){
		return false;
	}

	for(int i = 0; i < str1.size(); ++i){
		if(str1[i] != str2[i]){
			return false;
		}
	}

	return true;
}
