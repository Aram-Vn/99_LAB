#include <iostream>

void copy_remove(char res[][3], char arr[][3], char ch);

int main(){

 const int SIZE = 3;
 char res[SIZE][SIZE];
 char arr[SIZE][SIZE] = { {'a', 'b', '\0'}, 
								{'b', 'f', '\0'},
								{ 'b', 'n', '\0'}};
 char ch = 'b';

 copy_remove(res, arr, ch);

	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			 std::cout << res[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void copy_remove(char res[][3], char arr[][3], char ch){
	for(;**arr != '\0'; ++arr,++res){
		char* arr_ptr = *arr;
		char* res_ptr = *res;
		for(;*arr_ptr != '\0'; ++arr_ptr, ++res_ptr){
			if(*arr_ptr == ch){
				*res_ptr = ' ';
			}
			else{
				*res_ptr = *arr_ptr;
			}		
		}
	}
	

}
