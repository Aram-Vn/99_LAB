#include <iostream>

int vek_length(int* vek1, int SIZE);
int sqrt_1(int num);
double skaliar_art(int* vek1, int* vek2, int SIZE); 
double vek_ankjun(int* vek1, int* vek2, int SIZE); 

int main(){

 const int SIZE = 3;
 int vek1[SIZE];
 int vek2[SIZE];

 std::cout << "vek1\n";
	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek1[i];
	}

 std::cout << "vek2\n";
	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek2[i];
	}

 std::cout << "cos() = " << vek_ankjun(vek1, vek2, SIZE) << std::endl;

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


double skaliar_art(int* vek1, int* vek2, int SIZE){
	double res = 0;

	for(int i = 0; i < SIZE; ++i){
		res += vek1[i] * vek2[i];
	}

	return res;
}

double vek_ankjun(int* vek1, int* vek2, int SIZE){

	double hamarich = skaliar_art(vek1, vek2, SIZE);
	int haitarar = vek_length(vek1, SIZE) * vek_length(vek2, SIZE);

	return hamarich / haitarar;

}
