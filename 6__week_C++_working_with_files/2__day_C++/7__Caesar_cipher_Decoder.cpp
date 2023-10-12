#include <iostream>
#include <fstream>

void Caesar_cipher(std::string& str, int kee);

int main(){

 int kee = 0;
 std::cout << "enter kee" << std::endl;
 std::cin >> kee;

 std::ifstream reader;

 reader.open("alp.result.txt"); 
	
	if(!reader.is_open()){
		std::cout << "File si not open" << std::endl;
		return -1;	
	}

 std::string str;

 std::ofstream writer;

 writer.open("alp.decoded.txt");

	if(!writer.is_open()){
		std::cout << "File si not open" << std::endl;
		return -1;	
	}

	while(!reader.eof()){
		std::getline(reader, str);
		if(str == ""){
			continue;
		}
		Caesar_cipher(str, kee);
		writer << str << std::endl;
	}

	if(reader.is_open()){
		reader.close();
	}

	if(reader.is_open()){
		reader.close();
	}

}


/* void Caesar_cipher(std::string& str, int kee){ */
/* 	for(int i = 0; i < str.length(); ++i){ */
/* 		if(str[i] >= 'a' && str[i] <= 'z'){ */ 
/* 			str[i] = (str[i] - 'a' - kee + 26) % 26 + 'a'; */
/* 		} */
/* 		else if(str[i] >= 'A' && str[i] <= 'Z'){ */
/* 			str[i] = (str[i] - 'A' - kee + 26) % 26 + 'A'; */
/* 		} */ 
/* 	} */
/* } */

void Caesar_cipher(std::string& str, int kee){
	for(int i = 0; i < str.length(); ++i){
		if(str[i] >= 'a' && str[i] <= 'z'){
			if(str[i] - kee >= 'a'){
				str[i] -= kee;
			}
			else{
				str[i] = str[i] - kee + 26;
			}
		}
		else if(str[i] >= 'A' && str[i] <= 'Z'){
			if(str[i] - kee >= 'A'){
				str[i] -= kee;
			}
			else{
				str[i] = str[i] - kee + 26;
			}
		}
	}
}

