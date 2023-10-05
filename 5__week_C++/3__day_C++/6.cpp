#include <iostream>

void insertion_s_rec(int* arr, int size, int ind1, int ind2, int* tmp);

int main(){

 const int SIZE = 5;
 int arr[SIZE];
 int tmp = 0;
 
	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 insertion_s_rec(arr, SIZE, 0, 1, &tmp);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}


void insertion_s_rec(int arr[], int size, int ind1, int ind2, int* tmp){
    if (ind1 < size)
    {
        if (ind2 >= 0 && arr[ind2] > *tmp)
        {
            arr[ind2 + 1] = arr[ind2];
            insertion_s_rec(arr, size, ind1, ind2 - 1, tmp);
            return;
        }

        arr[ind2 + 1] = *tmp;
        
        if (ind1 + 1 < size)
        {
            *tmp = arr[ind1 + 1];
        }
        
        insertion_s_rec(arr, size, ind1 + 1, ind1, tmp);
    }
}
