#include <iostream>

int main(){

 int i_num = 0;
 char ch = 'a';
 float f_num = 0.25;

 int* i_ptr = &i_num;
 char* ch_ptr = &ch;
 float* f_ptr = &f_num;

 std::cout << *i_ptr << std::endl;
 std::cout << *f_ptr << std::endl;
 std::cout << *ch_ptr << std::endl;

}
