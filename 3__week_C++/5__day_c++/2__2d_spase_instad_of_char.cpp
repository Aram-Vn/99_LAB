#include <iostream>

void copy_remove(char res[][3], const char arr[][3], char ch);

int main(){

 const int SIZE = 3;
 char res[SIZE][SIZE];
 const char arr[SIZE][SIZE] = { {'a', 'b', '\0'}, 
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

void copy_remove(char res[][3], const char arr[][3], char ch){

	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			if(arr[i][j] == ch){
				res[i][j] = ' ';
			}
			else{
				res[i][j] = arr[i][j];
			}
		}
	}

}
