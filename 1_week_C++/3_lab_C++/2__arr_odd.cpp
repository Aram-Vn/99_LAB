#include <iostream>

int main(){

 const int SIZE = 5;
 int arr[SIZE];
 int count = 0;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
		if( arr[i] %2 != 0){
		  ++count;
		}
	} 

 std::cout << "********\n";
 std::cout << count << std::endl;

}

