#include <iostream>

int main(){
 
 const int SIZE = 5;
 int arr [SIZE];
 int max = 0;
 int min = 0;
 int index_min = 0;
 int index_max = 0; 

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}	 

 min = arr[0];
 max = arr[0];

	for( int i = 0 ; i < SIZE ; ++i ){

		if( arr[i] < min ){
		  min = arr[i];
		  index_min = i;
		}

		if( arr[i] > max ){
		  max = arr[i];
		  index_max = i;
		}
	}	 

 std::cout << "min max sum = " << arr[index_min] + arr[index_max] << std::endl;
}
