#include <iostream>

int main(){

 const int SIZE = 5;
 int arr[SIZE];

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

 int min = arr[0];

	for( int i = 0 ; i < SIZE ; ++i ){
		if( arr[i] < min ){
		  min = arr[i];
		}
	}

 std::cout << min << std::endl;
}
