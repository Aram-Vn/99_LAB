#include <iostream>

 void foo(int num){
  int patik = 1;
  int tmp = num;
  int tver = 0;

	while( tmp > 10){
	  tmp /= 10;
	  patik *= 10;
	}
 	
  tmp = num;

	while( patik  ){
  		tver = tmp;
		tver = tver/patik;
		std::cout << tver << " ";
		tmp = tmp - (tver*patik);		
		patik /= 10;
	}
  std::cout << std::endl;
 }

int main(){

 int num = 0;
 std::cin >> num;

 foo(num);
}
