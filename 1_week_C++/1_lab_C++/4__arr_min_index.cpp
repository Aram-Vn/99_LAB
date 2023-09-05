#include <iostream>

int main(){
 
 const int SIZE = 5;
 int arr [SIZE];
 int min = 0;
 int index_min = 0;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}	 

 min = arr[0];

	for( int i = 0 ; i < SIZE ; ++i ){

		if( arr[i] < min ){
		  min = arr[i];
		  index_min = i;
		}
	}	 

 std::cout << "min index  " << index_min << std::endl;
}
