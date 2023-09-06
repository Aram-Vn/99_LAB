#include <iostream>

int main(){

 const int SIZE = 8;
 char arr[SIZE];
 char tmp = 'a';
 int tmp_size = SIZE;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

	for( int i = 0 ; i < SIZE/2 ; ++i ){
	  tmp = arr[i];
	  arr[i] = arr[tmp_size - 1 - i];
	  arr[tmp_size - 1 -i] = tmp;  
	}

 std::cout << "*********\n";

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << arr[i] << " ";
	}

 std::cout << std::endl;
}
