#include <iostream>

int main(){

 const int SIZE = 3;
 const int SIZE2 = 4;
 int arr1[SIZE];
 int arr2[SIZE2];

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << "arr1" << std::endl;
	  std::cin >> arr1[i];
	}

	for( int i = 0 ; i < SIZE2 ; ++i ){
	  std::cout << "arr2" << std::endl;
	  std::cin >> arr2[i];
	}

 int sum = 0;
 int res = 0;

 int j = SIZE - 1;

	for( int i = SIZE2 + SIZE - 1 ; i >= 0 ; --i ){
		if( j >= 0 ){
		  sum += arr1[j];
		}
		else{
		  sum += arr2[i];
		} 
	  --j;
	}
 
 res = sum / (SIZE2 +  SIZE );
 std::cout << "******\n";
 std::cout << res << std::endl;

}
