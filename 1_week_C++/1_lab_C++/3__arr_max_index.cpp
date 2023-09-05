#include <iostream>

int main(){
 
 const int SIZE = 5;
 int arr [SIZE];
 int max = 0;
 int index_max = 0;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}	 

 max = arr[0];

	for( int i = 0 ; i < SIZE ; ++i ){
		if( arr[i] > max ){
		  max = arr[i];
		  index_max = i;
		} 

	}	 

 std::cout << "max index  " << index_max << std::endl;
}
