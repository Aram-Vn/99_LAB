#include <iostream>

int main(){

 const int SIZE = 8;
 int arr[SIZE];

 int size_tmp = SIZE;
 int tmp = 0;
 int count = 0;
 int off = 1;
 int end = size_tmp - 1;

	for( int i = 0; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

	for( int i = 0 ; i < SIZE ; i++ ){
		for( int j = i + 1; j < SIZE - count; ++j ){
			if( arr[i] == arr[j] ){
			  ++count;
			  arr[j] = tmp;
			  arr[j] = arr[end];
			  arr[end] = arr[j];
			  --end;
			  --j;
			}	
		} 
	}

 std::cout << "*******\n";
 std::cout << count << std::endl;
 std::cout << "*******\n";
 
	for( int i = 0; i < size_tmp - count ; ++i ){
	  std::cout << arr[i] << std::endl;
	}
}
