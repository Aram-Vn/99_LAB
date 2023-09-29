#include <iostream>

int find_entaArr(int* arr, int SIZE, int num);

int main(){

 const int SIZE = 10;
 int arr[SIZE];
 int num = 0;
 std::cout << "NUM" << std::endl;
 std::cin >> num;

 std::cout << "ARR 10" << std::endl;

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 std::cout << find_entaArr(arr, SIZE, num) << std::endl;

}

int find_entaArr(int* arr, int SIZE, int num){

 int j = 0;
 int count = 0;
 int sum = 0;

	for(int i = 0; i < SIZE; ++i){
		/* std::cout << sum << " SUM" << std::endl; */
		/* std::cout << "Index  " << i << std::endl; */
		sum += arr[i];
		++count;

		if(sum == num){
			return count;
		}
	
		if(sum > num){
			i = j;
			++j;
			count = 0;
			sum = 0;
		}

	}

	return -1;	
}
