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

	if(*arr == '\0' || *ptr == '\0'){
		if(*ptr == '\0'){
			return tmp;
		}
		return nullptr;
	}

	if(*arr != *ptr){
		ptr_ptr(tmp + 1, tmp1);
	}
	else{
		ptr_ptr(arr + 1, ptr + 1);
	}
}
