#include <iostream>

const char* str_str(std::string str, const char* tar);

int main(){
 std::string str = " ";

 std::getline(std::cin , str);
 std::cout << str << std::endl;

 char tar[25];
 std::cin >> tar;
 std::cout << tar << std::endl; 

 std::cout << str_str(str, tar) << std::endl;
} 

const char* str_str(std::string str, const char* tar){

	bool flag = false;
	int tmp = 0;
	int size = 0;

	while(tar[size]){
		++size;
	}

	for(int i = 0; i < str.size(); ++i){
		tmp = i;
		for(int k = 0; k < size; ++k){
			if(str[i] != tar[k]){
				flag = false;
				i = tmp;
				break;
			}
			++i;
			flag = true;
		}	

		if(flag){
			return &str[tmp];
		}
	}

	return nullptr;
}
