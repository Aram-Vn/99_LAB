#include <iostream>

const char* str_str (const char* arr, const char* str);

int main(){

 std::cout << "hel hll lllhsh h world tmp\n";
 std::cout << "ll\n";
 std::cout << "*************************\n";


 const char* arr = "hel hll lllhsh h world tmp";
 const char* str = "hll";

 std::cout << str_str(arr, str) << std::endl;

}

const char* str_str (const char* arr, const char* str){
	bool check = 1;
	int count = 0;

	while(*arr != '\0'){
		while(*str != '\0'){
			if(*arr == *str){
				arr += 1;
				str += 1;
				++count;
				check = 1;
			}
			else{
				arr += 1;
				str -= count;
				count = 0;
				check = 0;
				break;
			}
		}
		
		if(check){
			break;
		}
	}


	if(check){
		arr -= count;
		return arr;
	}
	else{
		return nullptr;
	}
}
