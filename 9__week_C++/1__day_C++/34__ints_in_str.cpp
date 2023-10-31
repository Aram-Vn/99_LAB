//Տրված նախադասության համար դուրս բերել եւ տպել բոլոր թվերը։

#include <iostream>

void ints(std::string str);

int main(){

 std::string str;

 std::getline(std::cin, str);

 ints(str); 
}

void ints(std::string str){
	int arr[str.size()];
	int k = 0;

	for(int i = 0; i < str.size(); ++i){
		if(str[i] >= '0' && str[i] <= '9'){
			arr[k] = str[i] - '0';
			++k;
		}
	}

	for(int i = 0; i < k; ++i){
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
