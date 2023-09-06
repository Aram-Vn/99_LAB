#include <iostream>

int main(){

 const int SIZE = 8;
 char arr[SIZE];

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

	for( int i = 0 ; i < SIZE ; ++i ){
		if( arr[i] >= 'a' && arr[i] <= 'z' ){
			arr[i] -= 32;
		}
	}
	
	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << arr[i] << " ";
	}
	
 std::cout << std::endl;
}
