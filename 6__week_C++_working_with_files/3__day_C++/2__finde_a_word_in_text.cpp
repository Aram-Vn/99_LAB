#include <iostream>
#include <fstream>

/* bool find_a_word(std::string str, std::string word); */
bool find_a_word(std::string mys, std::string sub); 

int main(){

 std::ifstream reader;
 std::ofstream writer;

 reader.open("some_text.txt");

	if(!reader.is_open()){
		std::cout << "Something went wrong" << std::endl;
		return -1;
	}

 std::string word = "";
 std::cout << "ENTER A WORD" << std::endl;
 std::cin >> word;

 writer.open("some_result.txt");
 std::string sen;
 int count = 0;

	while(!reader.eof()){
		++count;
		std::getline(reader, sen);
			if(find_a_word(sen, word)){
				writer << count << ") " << sen << std::endl;
				break;
			}
	}
	
	if(reader.is_open()){
		reader.close();	
	}

	if(writer.is_open()){
		writer.close();	
	}
}


/* bool find_a_word(std::string str, std::string word){ */
/* 	if((str.size() == 0 && word.size() != 0) || word.size() > str.size()){ */
/* 		return 0; */
/* 	} */
	
/* 	bool flag = 1; */
/* 	int tmp = 0; */

/* 	for(int i = 0; i < str.size(); ++i){ */
/* 		for(int j = 0; j < word.size(); ++j){ */
/* 			tmp = i; */
/* 			flag = 1; */
/* 			if(str[i] == word[j]){ */
/* 				++i; */
/* 			} */
/* 			else{ */
/* 				flag = 0; */
/* 				break; */
/* 			} */
/* 		} */
/* 		/1* if((str[i + 1] == ' ' || str[i + 1] == '\n') && flag && ((i - tmp + 1) == word.size())){ *1/ */
/* 		if((str[tmp + 1] == ' ' || str[tmp + 1] == '\n') && flag){ */
/* 			return true; */
/* 		} */
/* 		i = tmp; */
/* 	} */
	
/* 	return false; */
/* } */

bool find_a_word(std::string mys, std::string sub) {
    if(sub.size() > mys.size()) {
        return false;
    }
    int i = 0;
    int idx = 0;
    while(i < mys.size() && idx < sub.size()) {
        if(mys[i] == sub[idx]) {
            ++idx;
        } else {
            idx = 0;
        } 
        ++i;
    }
    return (idx == sub.size());
}
