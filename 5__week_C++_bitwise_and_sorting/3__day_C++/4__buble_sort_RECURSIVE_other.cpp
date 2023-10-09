//Տրված ամբողջ թվային զանգվածը սորտավորել Bubble Sort ալգորիթմով։recursive

#include <iostream>

void sort_bubble_rec(int* arr, int size, int ind1, int ind2, bool* no_swap);

int main(){

 const int SIZE = 5;
 int arr[SIZE];

	for(int i = 0; i < SIZE; ++i){
		std::cin >> arr[i];
	}

 bool flag = true;

 sort_bubble_rec(arr, SIZE, 0, 0, &flag);

	for(int i = 0; i < SIZE; ++i){
		std::cout << arr[i] << " ";
	}
 std::cout << std::endl;
}

void sort_bubble_rec(int* arr, int size, int ind1, int ind2, bool* no_swap){
	/* if (ind2 == size - ind1 - 1 || ind1 == size - 1) */
    if (ind2 == size - 1 || ind1 == size - 1)
    {    
        return;
    }

    if (arr[ind2] > arr[ind2 + 1])
    {
        int tmp = arr[ind2];
        arr[ind2] = arr[ind2 + 1];
        arr[ind2 + 1] = tmp;
        *no_swap = false;
    }

    sort_bubble_rec(arr, size, ind1, ind2 + 1, no_swap);

    if (*no_swap)
    {
        return;
    }

    *no_swap = true;
    sort_bubble_rec(arr, size, ind1 + 1, 0, no_swap);
}
