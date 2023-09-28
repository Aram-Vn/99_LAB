#include <iostream>

int find_num(int* arr, int SIZE);
int find_num_2(int* arr, int SIZE);
void scan_arr(int* arr, int SIZE);

int main(){

 const int SIZE = 99;
 int arr[SIZE];
 
 scan_arr(arr, SIZE);

 std::cout << find_num(arr, SIZE) << " 1 " << std::endl;
 std::cout << find_num_2(arr, SIZE) << " 2 " << std::endl;
}

void scan_arr(int* arr, int SIZE){
	int num = 0;
	std::cin >> num;
	int j = 0;

	for(int i = 0; i < SIZE + 1 ; ++i){
		if(i == num - 1){
			++j;
			continue;
		}
		arr[i] = ++j;
		std::cout << arr[i] <<  " ARR " << std::endl;
	}
}

int find_num(int* arr, int SIZE){
	for(int i = 0; i < SIZE; ++i){
		if(arr[i + 1] - arr[i] != 1){
			return arr[i] + 1;
		}
	}
	return -1;
}


int find_num_2(int* arr, int SIZE){

	int sum = ((100)*(100 + 1))/2;
	std::cout << sum << "  SUM" << std::endl;

	for(int i = 0; i < SIZE; ++i){
		sum -= arr[i];
	}

	return sum;
}
