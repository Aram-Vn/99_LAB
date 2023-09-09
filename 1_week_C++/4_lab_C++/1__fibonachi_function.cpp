#include <iostream>

	int fib ( int num );

int main(){

 int num = 0;

 std::cin >> num;
 std::cout << fib( num ) << std::endl;

}

	int fib( int num ){
	  int tmp_last = 1;
	  int tmp_next = 1;
	  int tmp3 = 0;

		if( num != 0 ){
			for( int i = 3 ; i <= num ; ++i ){
			  tmp3 = tmp_last + tmp_next;
			  tmp_last = tmp_next;
			  tmp_next = tmp3;
			}
	      return tmp_next;
	
		}
		else{
		  tmp_next = 0;
		  return tmp_next;
		}

	}
