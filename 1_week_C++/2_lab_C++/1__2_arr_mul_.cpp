#include <iostream>

int main(){

 const int SIZE = 5;
 int arr1[SIZE];
 int arr2[SIZE];

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << "arr1\n";
	  std::cin >> arr1[i];
	
	  std::cout << "arr2\n";
	  std::cin >> arr2[i];
	}

 std::cout << "******\n";

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << arr1[i] * arr2[i] << std::endl; 
	}
}
