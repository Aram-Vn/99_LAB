//30. Տրված է nxn չափի քառակուսային մատրից, որտեղ բոլոր տարրերը 0-ներ և  M-եր են։ Գրել ծրագիր, որը ստեղծում է նոր nxn չափի մատրից, որտեղ M-երը գտնվում են իրենց տեղերում, իսկ 0-ների փոխարեն գրված է այդ 0-ին հարևան M-երի քանակը

#include <iostream>

int main(){

 const int size = 5;
 char arr[size][size];

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cin >> arr[i][j];
		}
	}

 std::cout << std::endl;

	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	int count = 0;

	for(int i = 0; i < size; ++i){
		for(int k = 0; k < size; ++k){
			if(arr[i][k] == '0'){
				if(i - 1 >= 0 && k - 1 >= 0 && arr[i - 1][k - 1] == 'M'){ // 1
					++count;
				}		

				if(i - 1 >= 0 && arr[i - 1][k] == 'M'){ // 2
					++count;
				}
	
				if(i - 1 >= 0 && k + 1 <= size - 1 && arr[i - 1][k + 1] == 'M'){ // 3
					++count;
				}

				if(k - 1 >= 0 && arr[i][k - 1] == 'M'){ // 4
					++count;
				}
	
				if(k + 1 <= size - 1 && arr[i][k + 1] == 'M'){ // 5
					++count;
				}	

				if(i + 1 <= size - 1 && k - 1 >= 0 && arr[i + 1][k - 1] == 'M'){ // 6
					++count;
				}

				if(i + 1 <= size - 1 && arr[i + 1][k] == 'M'){ // 7
					++count;
				}

				if(i + 1 <= size - 1 && k + 1 <= size - 1 && arr[i + 1][k + 1] == 'M'){ // 8
					++count;
				}
			
				arr[i][k] = count + '0';
			}
		
			count = 0;
		}
	}	

	std::cout << std::endl;
	
	for(int i = 0; i < size; ++i){
		for(int j = 0; j < size; ++j){
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
} 
