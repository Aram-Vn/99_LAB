//Գրել ֆունկցիա, որը ստանում է ամբողջ թիվ, այդ թվին գումարում 
//նրա reverse֊ը, քանի դեռ չի ստացել պոլինդրոմ արժեք, 
//և վերադարձնում է քայլերի քանակը, այդ արժեքին հասնելու համար

#include <iostream>

int patik (int num);
int reversed(int num);
int sum_till_polindrome(int num);

int main(){
 int num = 0;
 
 std::cin >> num;

 std::cout << sum_till_polindrome(num) << std::endl;
}

int patik (int num){
	int res = 1;

	while(num > 10){
		res *= 10;
		num /= 10;
	}
	
	return res;
}



int reversed(int num){
	int res = 0;
	int pat = patik(num);
	
	while(num > 0){
		res += (num % 10) * pat;
		num /= 10;
		pat /= 10;
	}

	return res;
}


int sum_till_polindrome(int num){
	int pat = patik(num);
	int reverse = reversed(num);
	int count = 0;

	while(num != reversed(num)){
		std::cout << num << "   " << reverse << std::endl;
		++count;
		num += reverse;
		reverse = reversed(num);
	}
	
	return count;
}
