//Գրել ռեկուրսիվ ֆունկցիա, որը ստանում է n բնական թիվ և տպում է n-ից 0 թվերը։

#include <iostream>

void printn(int num);

int main(){

 int num = 0;
 std::cin >> num;

 printn(num);
 std::cout << std::endl;
}

void printn(int num){
	if(num < 0){
		return;
	}

	std::cout << num << " ";
	
	printn(num - 1);
}
