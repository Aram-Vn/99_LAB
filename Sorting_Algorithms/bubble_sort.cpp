#include <iostream>

void bubble_sort(int* arr, const size_t size);

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

    bubble_sort(arr, size);

    for (size_t i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void bubble_sort(int* arr, const size_t size)
{
    bool flag = true;

    for (size_t i = 0; i < size; ++i)
    {
        for (size_t j = 0; j < size - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j + 1], arr[j]);
                flag = false;
            }
        }
        if (flag)
        {
            break;
        }
        flag = true;
    }
}