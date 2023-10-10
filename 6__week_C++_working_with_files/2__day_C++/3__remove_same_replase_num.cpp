#include <iostream>

void replase_char(std::string& str, int size);

int main(){

 std::string str;
 std::cin >> str;
 
 int size = str.length();
 
 replase_char(str, size);

 std::cout << str << std::endl;
}

void replase_char(std::string& str, int size){

 int count = 1;
 int k = 0;
 char res[size];

	for(int i = 0; i <= size; ++i){
		if(str[i] == str[i + 1]){
			++count;
			res[k] = str[i];
		}
		else if(str[i] != str[i - 1] && str[i] != str[i + 1] ){
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
