#include <iostream>

int main(){

 const int SIZE = 8;
 int arr[SIZE];
 int num = 0;
 bool check = 0;

 std::cout << "enter a num\n";
 std::cin >> num;

 std::cout << "******\n" << "enter arr\n";  

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

	for( int i = 0 ; i < SIZE ; ++i ){
		if( arr[i] == num ){
		  check = 1;
		}	
	}

	if( check ){
	  std::cout << "YES" << std::endl;
	}
	else{
	  std::cout << "NO" << std::endl;
	}

}
