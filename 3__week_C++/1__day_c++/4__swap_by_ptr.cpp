#include <iostream>

void swp (int* ptr_1, int* ptr_2){

 int ptr_tmp = *ptr_1;
 *ptr_1 = *ptr_2;
 *ptr_2 = *ptr_tmp;

}

int main(){

 int num1 = 9;
 int num2 = 5;

 int* ptr_1 = &num1;
 int* ptr_2 = &num2;
 
 swp(ptr_1, ptr_2);
 
 std::cout << *ptr_1 << std::endl;
 std::cout << *ptr_2 << std::endl;



}
