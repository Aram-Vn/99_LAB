#include <iostream>

const char* ptr_ptr (const char* arr, const char* ptr);

int main(){

 std::cout << "hel hll lllhsh h world tmp\n";
 std::cout << "lllhsh\n";
 std::cout << "*************************\n";


 const char* arr = "hel hll lllhsh h world tmp";
 const char* ptr = "lllhsh";

 std::cout << ptr_ptr(arr, ptr) << std::endl;

}

const char* ptr_ptr (const char* arr, const char* ptr){
	const char* tmp = arr;
	const char* tmp1 = ptr;

	while(*arr != '\0' && *ptr != '\0'){
		if(*arr != *ptr){
			arr = ++tmp;
			ptr = tmp1;
		}
		else{
			++arr;
			++ptr;
		}
	}
	
	if(*ptr == '\0'){
		return tmp;
	}
	return nullptr;

}
