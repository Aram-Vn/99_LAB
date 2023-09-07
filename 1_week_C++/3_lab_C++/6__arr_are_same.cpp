#include <iostream>

int main(){

 const int SIZE = 4;
 int arr1[SIZE];
 int arr2[SIZE];
 bool check = 1;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << "arr1\n";
	  std::cin >> arr1[i];

	  std::cout << "arr2\n";
	  std::cin >> arr2[i];	
	}

	for( int i = 0 ; i < SIZE ; ++i ){
	  	if( arr1[i] != arr2[i] ){
	  	  check = 0;
	  	}
	}

	if( check ){
	  std::cout << "YES" << std::endl;
	}
	else{
	  std::cout << "NO" << std::endl;
	}
	
}
