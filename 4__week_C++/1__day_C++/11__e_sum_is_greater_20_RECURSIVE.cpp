//թվի թվանշանների գումարը մեծ է քսանից,

#include <iostream>

bool sum_gr_20(int num);
int foo(int);

int main(){

 int num = 0;
 std::cin >> num;

	std::cout << foo(num) << "  FOO" << std::endl;

	if(foo(num) > 20 ){
		std::cout << "YES" << std::endl;
	}
	else{
		std::cout << "NO" << std::endl;
	}
}

int foo(int num) {
    if (num == 0) {
        return 0;
    } else {
        return num % 10 + foo(num / 10);
    }
}

bool sum_gr_20(int num){

	static int sum = 0;
	sum += num%10;

	std::cout << sum << "  " << num << std::endl;

	if(sum > 20){
		return false;
	}

	if(num <= 0){
		if(sum > 20){
			return false;
		}
		else{
			return true;
		}
	}

	return sum_gr_20((num / 10));
}
