#include <iostream>

void SWP(int* ptr1, int* ptr2);

int main() {
  
  int a = 5;
  int b = 10;

  std::cout << "a = " << a << " b = " << b << std::endl;

  SWP(&a, &b);

  std::cout << "a = " << a << " b = " << b << std::endl;

}

void SWP(int* ptr1, int* ptr2){

    int temp = *ptr1;  
    *ptr1 = *ptr2;    
    *ptr2 = temp;    

}
