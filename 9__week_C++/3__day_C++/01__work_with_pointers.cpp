#include <iostream>

int main(){
 
 int a = 5;
 int* i_ptr = &a;
 *i_ptr = 8;

 std::cout << *i_ptr << std::endl;
 std::cout << &i_ptr << std::endl;

}
