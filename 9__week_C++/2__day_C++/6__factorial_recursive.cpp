//Գրել տրված թվի ֆակտորիալը հաշվող ռեկուրսիվ ֆունկցիա։

#include <iostream>

int fac(int num);

int main(){
 int num = 0;
 std::cin >> num;

 std::cout << fac(num) << std::endl;

}

int fac(int num){
	if(num <= 0){
		return 1;
	}

	return num * fac(num - 1);
}
