#include <iostream>

void copy_remove(char* res, const char* arr, char ch);

int main(){

 const int SIZE = 9;
 char res[SIZE];
 const char arr[SIZE] = {'a', 'b', 'c', 'b', 'f', 's', 'b', 'n', '\0'};
 char ch = 'b';

 copy_remove(res, arr, ch);

 std::cout << res << std::endl;

}

void copy_remove(char* res, const char* arr, char ch){

	while(*arr){
		if(*(arr) != ch){
			*(res) = *(arr);
		}
		else{
			*(res) = ' ';
		}
		++arr;
		++res;
	}

	*(res) = '\0';
}
