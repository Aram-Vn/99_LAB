//V  վեկտոր։ Հաշվել տրված վեկտորի երկարությունը։

#include <iostream>

int vek_length(int* vek1, int SIZE);
int sqrt_1(int num);

int main(){

 const int SIZE = 3;
 int vek1[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek1[i];
	}

 std::cout << "*********\n" << vek_length(vek1, SIZE) << std::endl;
 
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
	
	return mid; 
}

int vek_length(int* vek1, int SIZE){
	int res = 0;

	for(int i = 0; i < SIZE; ++i){
		res += vek1[i] * vek1[i];
	}

	return sqrt_1(res);
	
}

