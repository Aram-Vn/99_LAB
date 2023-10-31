#include <iostream>

void longest_w(std::string str);

int main(){

 std::string str;

 std::getline(std::cin, str);

 longest_w(str); 
}

void longest_w(std::string str){
	int max_len = 0;
	int current_len = 0;
	int start_i = 0;
	int start_max = 0;
	int end_max = 0;

	for(int i = 0; i < str.size(); ++i){
		if (str[i] != ' ') {
			++current_len;
		} 
		else{
			if (current_len > max_len){
				max_len = current_len;
				start_max = start_i;
				end_max = i;			
			}

			start_i = i + 1;
			current_len = 0;
		}	
	}

	for(int i = start_max; i < end_max; ++i){
		std::cout << str[i];
	}
	std::cout << std::endl;
}
