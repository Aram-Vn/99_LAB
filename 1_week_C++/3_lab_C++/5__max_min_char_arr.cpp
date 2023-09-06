#include <iostream>

int main(){

 const int SIZE = 8;
 char arr[SIZE];

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];	  
	}

 char max = arr[0];
 char min = arr[0];

	for( int i = 0 ; i < SIZE ; ++i ){
		if( arr[i] < min ){
		  min = arr[i];
		}	  

		if( arr[i] > max ){
		  max = arr[i];
		}
	}

 std::cout << "MIN " << min << " MAX " << max << std::endl;
}
