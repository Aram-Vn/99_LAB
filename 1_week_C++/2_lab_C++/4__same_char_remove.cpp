#include <iostream>

int main(){

 int size = 8;
 char* arr = new char[size];

	for( int i = 0; i < size ; ++i ){
	  std::cin >> arr[i];
	}

 int j = size;
 char tmp = 'a';
 int count = 0;

	for( int i = 0 ; i < size ; ++i ){
		while( j > i ){
			if( arr[i] == arr[j] && arr[i] != '\0' ){
			  arr[j] = '\0';
			  count++;
				for( int k = j ; k < size ; ++k ){
				  tmp = arr[k + 1];
				  arr[k + 1] = arr[k];
				  arr[k] = tmp;
				}
			}
		  j--;
		}
	  j = size - 1;
	}

 size = size - count;
 
 std::cout << "**************\n";

	for( int i = 0; i < size ; ++i ){
	  std::cout <<  arr[i] << std::endl;
	}

 delete [] arr;
 arr = nullptr;

}
