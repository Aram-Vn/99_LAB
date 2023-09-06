#include <iostream>

int main(){

 int SIZE = 8;
 char* arr = new char[SIZE];

	for( int i = 0; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

 int j = SIZE - 1;
 char tmp = 'a';
 int count = 0;

	for( int i = 0 ; i < SIZE - 1 ; ++i ){
		while( j > i ){
			if( arr[i] == arr[j] ){
			  arr[j] = '\0';
				for( int k = j ; k < SIZE ; ++k ){
				  tmp = arr[k + 1];
				  arr[k + 1] = arr[k];
				  arr[k] = tmp;
				}
				if( arr[i] != '\0' ){
				  count++;
				}
			}
		  j--;
		}
	  j = SIZE - 1;
	}

 SIZE = SIZE - count;
 std::cout <<  count  << std::endl;
 
 std::cout << "**************\n";

	for( int i = 0; i < SIZE ; ++i ){
	  std::cout <<  arr[i] << std::endl;
	}

 delete [] arr;
 arr = nullptr;

}
