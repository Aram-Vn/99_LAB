#include <iostream>

int main(){

 const int SIZE = 5;
 int arr[SIZE];
 int sum = 0;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	  sum += arr[i];
	}

 std::cout << "sum " << sum << std::endl;
}
