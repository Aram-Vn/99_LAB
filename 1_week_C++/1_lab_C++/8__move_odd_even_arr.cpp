#include <iostream>

int main(){

 const int SIZE = 8;
 int arr[SIZE];

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}
 
 int tmp = 0;
 int i = 0;
 int j = SIZE - 1;

	while( i < j ){
		if( arr[i] % 2 != 0 ){
			if( arr[j] % 2 == 0 ){
			  tmp = arr[i];
			  arr[i] = arr[j];
			  arr[j] = tmp; 
			}
			else{
			  --j;
			}
		}
		else{
		  ++i;
		}
	}

 std::cout << "************\n" ;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << arr[i] << std::endl;
	}


}
