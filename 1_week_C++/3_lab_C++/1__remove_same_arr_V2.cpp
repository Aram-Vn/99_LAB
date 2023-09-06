#include <iostream>

int main(){

 const int SIZE = 8;
 int arr[SIZE];

 int size_tmp = SIZE;
 int tmp = 0;

	for( int i = 0; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

	for( int i = 0 ; i < size_tmp - 1 ; i++ ){
		for( int j = i + 1 ; j < size_tmp ; ++j ){
			if( arr[i] == arr[j] ){
			  arr[j] = tmp;
			  arr[j] = arr[size_tmp - 1];
			  arr[size_tmp - 1] = arr[j];
			  --size_tmp;
			  --j;
			}	
		} 
	}

 std::cout << "*******\n";
 
	for( int i = 0; i < size_tmp ; ++i ){
	  std::cout << arr[i] << std::endl;
	}
}
