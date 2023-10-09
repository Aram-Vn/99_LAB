

/* #include <iostream> */

/* void insertion_s_rec(int* arr, int SIZE, int k, int j, int& tmp); */

/* int main(){ */

/*  const int SIZE = 5; */
/*  int arr[SIZE]; */
/*  int tmp = 0; */
 
/* 	for(int i = 0; i < SIZE; ++i){ */
/* 		std::cin >> arr[i]; */
/* 	} */

/*  insertion_s_rec(arr, SIZE, 1, 0, tmp); */

/* 	for(int i = 0; i < SIZE; ++i){ */
/* 		std::cout << arr[i] << " "; */
/* 	} */
/*  std::cout << std::endl; */
/* } */

/* void insertion_s(int* arr, int SIZE){ */

/* 	int tmp = 0; */

/* 	for(int k = 1; k < SIZE; ++k){ */
/* 			tmp = arr[k]; */
/* 			int j = k - 1; */
/* 			while(j >= 0 && arr[j] > tmp){ */
/* 				arr[j + 1] = arr[j]; */
/* 				--j; */				
/* 			} */
/* 		arr[j + 1] = tmp; */
/* 	} */

/* } */

/* void insertion_s_rec(int* arr, int SIZE, int k, int j, int& tmp){ */

/* 	std::cout << k << "  K  " << j << "  J  "  <<  tmp << "  TMP " << std::endl; */

/* 	for(int i = 0; i < SIZE; ++i){ */
/* 		std::cout << arr[i] << " "; */
/* 	} */
/*  std::cout << std::endl; */

/* 	if(k == SIZE - 1){ */
/* 		return; */
/* 	} */

/* 	tmp = arr[k]; */
	
/* 	if(j >= 0 && arr[j] > tmp){ */
/* 		/1* std::cout << k << "  K  " << j << "  J  " << std::endl; *1/ */
/* 		arr[j + 1] = arr[j]; */
/* 		insertion_s_rec(arr, SIZE, k, j - 1, tmp); */
/* 		/1* return; *1/ */
/* 	} */
/* 	else{ */

/* 	arr[j + 1] = tmp; */

/* 	j = k - 1; */
/* 	insertion_s_rec(arr, SIZE, k + 1, j, tmp); */
/* 	} */
/* } */
