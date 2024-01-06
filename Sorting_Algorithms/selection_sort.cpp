#include <iostream>

void selection_sort(int* arr, const size_t size);

int main()
{
    const size_t size = 8;
    int arr[size];

    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selection_sort(arr, size);

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void selection_sort(int* arr, const size_t size)
{
    size_t min_ind = 0;

    for(size_t i = 0; i < size - 1; ++i)
    {
        min_ind = i;
        for (size_t j = i + 1; j < size; ++j) {
                if(arr[j] < arr[min_ind])
                {
                    min_ind = j;
                }
        }
        if(i != min_ind)
        {
            std::swap(arr[i], arr[min_ind]);
        }
    }
}