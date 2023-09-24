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
	const char* tmp_arr = arr;
	const char* tmp_ptr = ptr;

	while(*arr != '\0' && *ptr != '\0'){
		if(*arr != *ptr){
			arr = ++tmp_arr;
			ptr = tmp_ptr;
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
