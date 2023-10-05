#include <iostream>
const int MAX_SIZE = 100;

void arr_input(int [], int);
void sort_bubble(int [], int);
void sort_bubble_rec(int [], int, int, int, bool);
void sort_insertion(int [], int);
void sort_insertion_rec(int [], int, int, int, int);
int uniq(int [], int, int);
void arr_output(int [], int);

int main()
{
    int size = 0;

    do
    {
        std::cout << "Enter the size of arr: ";
        std::cin >> size;
    } while (size < 2 || size > MAX_SIZE || !(size & 1));

    int arr[MAX_SIZE] = {};

    arr_input(arr, size);  
  
	sort_insertion_rec(arr, size, 1, 0, arr[1]);

	arr_output(arr, size);
 
    return 0;
}

void arr_input(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "Arr[" << i << "] = ";
        std::cin >> arr[i];
    }
}

void sort_bubble(int arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        bool no_swap = true;
        for (int j = 0; j < size - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                no_swap = false;
            }
        }

        if (no_swap)
        {
            break;
        }
    }
}

void sort_bubble_rec(int arr[], int size, int ind1, int ind2, bool no_swap) // 2 3 1
{
    if (ind2 == size - ind1 || ind1 == size)
    {    
        return;
    }

    if (arr[ind2] > arr[ind2 + 1])
    {
        int tmp = arr[ind2];
        arr[ind2] = arr[ind2 + 1];
        arr[ind2 + 1] = tmp;
        no_swap = false;
    }

    sort_bubble_rec(arr, size, ind1, ind2 + 1, no_swap);

    if (no_swap)
    {
        return;
    }

    no_swap = true;
    sort_bubble_rec(arr, size, ind1 + 1, 0, no_swap);
}
void sort_insertion(int arr[], int size)
{
    for (int i = 1; i < size; ++i)
    {  
        int tmp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > arr[i])
        {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = tmp;
    }
}

void sort_insertion_rec(int arr[], int size, int ind1, int ind2, int tmp)
{
    if (ind1 < size)
    {
        if (ind2 >= 0 && arr[ind2] > tmp)
        {
            arr[ind2 + 1] = arr[ind2];
            sort_insertion_rec(arr, size, ind1, ind2 - 1, tmp);
            return;
        }

        arr[ind2 + 1] = tmp;
        
        if (ind1 + 1 < size)
        {
            tmp = arr[ind1 + 1];
        }
        
        sort_insertion_rec(arr, size, ind1 + 1, ind1, tmp);
    }
}

int uniq(int arr[], int size, int index)
{
    if (index == size)
    {
        return 0;
   }

    return arr[index] ^ uniq(arr, size, index + 1);
}
    
void arr_output(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;
}


