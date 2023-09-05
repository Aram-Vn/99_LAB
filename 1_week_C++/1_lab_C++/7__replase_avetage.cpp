#include <iostream>

int main(){

 const int SIZE = 5;
 int arr[SIZE];
 int sum_res = 0;
 
	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	  sum_res += arr[i];
	} 

 sum_res /= SIZE;

	for( int i = 0 ; i < SIZE ; ++i ){
	  arr[i] = sum_res;
	  std::cout << arr[i] << " ";
	} 

 std::cout << "\n";

}


