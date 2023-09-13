#include <iostream>

void sum(int num){

	if(num == 20){
		return;
	}

	sum(num + 1);
	std::cout << num << " " ;

}

int main(){

 int num = 0;
 sum(num);
 std::cout << std::endl;
}
