#include <iostream>

 void longest_word(std::string str,int length);
 
int main(){

 std::string sentense;

 std::getline(std::cin, sentense);

 int length = sentense.length();
 longest_word(sentense, length);

}

	void longest_word(std::string str,int length){
		int max_length = 0;
		int index_start = 0;
		int index_end = 0;
		int length_word = 0;
 		int max_start = 0;
		int max_end = 0;

			for(int i = index_end ; i < length - 1; ++i){
				if(str[i + 1] == ' '){
					index_end = i;
					length_word = index_end - index_start + 1;
					index_start = i;
					index_end += 2;
				}
				if(length_word > max_length){
					max_length = length_word;
					max_start = length_word - index_start;
					max_end = index_start;		
				}
				length_word = 0;
			}	
		
					for(int j = max_start;j <= max_end; ++j){
						std::cout << str[j];
					}
					std::cout << std::endl;
	}	
