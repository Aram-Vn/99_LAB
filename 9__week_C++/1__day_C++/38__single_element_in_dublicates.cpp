//Տրված է ամբողջ թվերի սորտավորված զանգված, որում բոլոր էլեմենտները կրկնվում են, բացի մեկից։ 
//Իրականացնել ալգորիթմ, որը կգտնի միակ էլեմենտը O(logn) ժամանակում:

#include <iostream>

int main(){
 const int size = 9;
 int arr[size];

	for(int i = 0; i < size; ++i){
		std::cin >> arr[i];
	}

 int start = 0;
 int end = size - 1;
 int mid = 0;

	if(size % 2 == 0){
		exit(0);
	}

	while(start != end){
		mid = (start + end) / 2;

		if(mid % 2 == 1) {
			if(arr[mid] == arr[mid + 1]) {
				end = mid;
			} else {
				start = mid +1;
			}		
		} else {
			if(arr[mid] == arr[mid + 1]) {
				start = mid + 1;
			} else {
				end = mid;			
			}
		}
	}

 std::cout << arr[end] << std::endl;
}
