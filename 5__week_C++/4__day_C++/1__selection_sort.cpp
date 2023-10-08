#include <iostream>

void selection_s(int* arr, int SIZE);

int main(){

 const int SIZE = 8;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 selection_s(arr, SIZE);
	
	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;

}

/* void selection_s(int* arr, int SIZE){ */

/* 	int min = 0; */
/* 	int index = 0; */
/* 	int tmp = 0; */
/* 	bool flag = 0; */

/* 	for(int i = 0; i < SIZE - 1; ++i){ */
/* 		min = arr[i]; */
/* 		for(int j = i + 1; j < SIZE; ++j){ */
/* 			if(arr[j] < min){ */
/* 				min = arr[j]; */
/* 				index = j; */
/* 				flag = 1; */
/* 			} */
/* 		} */
/* 		if(flag){ */
/* 			tmp = arr[index]; */
/* 			arr[index] = arr[i]; */
/* 			arr[i] = tmp; */
/* 		} */
/* 		flag = 0; */
/* 	} */
/* } */


/* void selection_s(int* arr, int SIZE){ */

/* 	for(int i = 0; i < SIZE - 1; ++i){ */
/* 		for(int j = i + 1; j < SIZE; ++j){ */
/* 			if(arr[i] > arr[j]){ */
/* 				std::swap(arr[i], arr[j]); */
/* 				j = i + 1; */
/* 			} */
/* 		} */
/* 	} */

/* } */


void selection_s(int* arr, int SIZE){
	
	int min_ind = 0;

	for(int i = 0; i < SIZE - 1; ++i){
		min_ind = i;
		for(int j = i + 1; j < SIZE; ++j){
			if(arr[j] < arr[min_ind]){
				min_ind = j;
			}
		}
		if(i != min_ind){
			std::swap(arr[i], arr[min_ind]);
		}
	}
}

