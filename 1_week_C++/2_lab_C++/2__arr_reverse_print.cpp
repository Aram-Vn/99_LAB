#include <iostream>



int main(){

 const int SIZE = 3;
 int arr[SIZE];
 char arr2[SIZE];
 double arr3[SIZE]; 

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cout << "int\n";
	  std::cin >> arr[i];
	  std::cout << "char\n";
	  std::cin >> arr2[i];
	  std::cout << "double\n";
	  std::cin >> arr3[i];
	}

 int j = SIZE - 1;
 int k = SIZE - 1;

	for( int i = 3 * SIZE - 1 ; i >= 0 ; --i ){
		if( j >= 0 ){     
	  	  std::cout << arr[i - 2 * SIZE] << std::endl;
		}
		else if( k >= 0 ){
		  std::cout << arr2[i - SIZE] << std::endl;
		  --k;
		}
		else{
		  std::cout << arr3[i] << std::endl;
		}
	  --j;		
	}

}
