#include <iostream>

int sqrt_1(int num);

int main(){

 int num = 0;
 std::cin >> num;

 std::cout << sqrt_1(num) << std::endl;
}

int sqrt_1(int num){
	if(num < 0){
		std::cout << "num need to be >= 0" << std::endl;
		return -1;
	}

	if(num == 1){
		return 1;
	}

	int start = 1;
	int end = num / 2;
	int target = num;
	int mid = 0; 

	while(start <= end){
		mid = (start + end) / 2;

		if( mid * mid == target){
			return mid;
		}
		else if(mid * mid > target){
			end = mid - 1;
		}
		else if(mid * mid < target){
			start = mid + 1;
		}
	}
	
	std::cout << mid << "mid" << std::endl;	
	std::cout << start << "start" << std::endl;	
}
