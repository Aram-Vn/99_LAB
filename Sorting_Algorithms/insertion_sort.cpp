#include <iostream>

void insertion_sort(int* arr, size_t size);

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

    insertion_sort(arr, size);

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void insertion_sort(int* arr, size_t size)
{
    int key = 0;

    for (size_t i = 0; i < size; ++i)
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}