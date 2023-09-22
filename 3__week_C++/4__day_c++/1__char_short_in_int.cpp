#include <iostream>

void foo(int* ptr, char ch1, char ch2, short sh); 

int main(){

 int ptr = 0;
 char ch1 = 'A';
 char ch2 = 'B';
 short sh = 123;

 foo(&ptr, ch1, ch2, sh);

 std::cout << ptr << "\n********" << std::endl;
 
 char* ch_ptr = (char*) &ptr;
 std::cout << *(ch_ptr) << std::endl;

 ++ch_ptr;
 std::cout << *(ch_ptr) << std::endl;

 ++ch_ptr;

 short* sh_ptr = (short*) ch_ptr;
 std::cout << *(sh_ptr) << std::endl;

}

void foo(int* ptr, char ch1, char ch2, short sh){

	char* ch_ptr = (char*) ptr;
	*ch_ptr = ch1;

	++ch_ptr;
	*ch_ptr = ch2;

	++ch_ptr;

	short* sh_ptr = (short*) ch_ptr;
    *(sh_ptr) = sh;

}
