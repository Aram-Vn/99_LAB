#include <iostream>

int foo(int num){
 
 /* int arr[6] = {0, 0 , 0, 5 , 0, 3}; */

 /* return arr[num]; */

 return 8 - num;
}

int main(){
 
 int num = 0;
 std::cin >> num;

 std::cout << foo(num) << std::endl;
}
