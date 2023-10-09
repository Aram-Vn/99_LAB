//Ստուգել թիվը 2-ի աստիճան է, թե ոչ։

#include <iostream>

bool is_deg(int num);

int main(){

 int num = 0;
 std::cin >> num;

	if(is_deg(num)){
		std::cout << "yes" << std::endl;
	}
	else{
		std::cout << "no" << std::endl;
	}
}

bool is_deg(int num){
	if(num < 0){
		std::cout << "NO!" << std::endl;
		return false;
	}
	
	int count = 0;

	while(num){
		if(num & 1){
			++count;
		}
		if(count > 1){
			return false;
		}
		
		num >>= 1;
	}
	
	return true;
}
