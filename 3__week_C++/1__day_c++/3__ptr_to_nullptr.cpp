#include <iostream>

int main(){

 int i_num = 0;
 char ch = 'a';
 float f_num = 0.25;

 int* i_ptr = &i_num;
 char* ch_ptr = &ch;
 float* f_ptr = &f_num;

 i_ptr = nullptr;
 ch_ptr = nullptr;
 f_ptr = nullptr;

// std::cout << sizeof(void) << std::endl;
}
