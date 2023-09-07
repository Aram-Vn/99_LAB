#include <iostream>

int main(){

 const int SIZE {8};
 int arr[SIZE];
 
 int max_index = 0;
 int min_index = 0;

	for( int i = 0 ; i < SIZE ; ++i ){
	  std::cin >> arr[i];
	}

 int max = arr[0];
 int min = arr[0];

 std::cout << "*******\n";

	for( int i = 0 ; i < SIZE ; ++i ){
		if( arr[i] >= max && arr[max_index] != arr[i] ){
		  max_index = i;
		  max = arr[i];
		}	
		
		if( arr[i] <= min && arr[min_index] != arr[i] ){
		  min_index = i;
		  min = arr[i];
		}
	}
 std::cout << "******\n";
 std::cout << "MAX INDEX " << max_index << "\nMIN INDEX " << min_index << std::endl;
}
