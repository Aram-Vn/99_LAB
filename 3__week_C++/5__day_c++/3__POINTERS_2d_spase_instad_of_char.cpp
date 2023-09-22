#include <iostream>

void copy_remove(char* res[3], const char* arr[3], char ch);

int main() {
    const int SIZE = 3;

    char res[SIZE][SIZE];

    const char arr[SIZE][SIZE] = {
        {'a', 'b', '\0'},
        {'b', 'f', '\0'},
        {'b', 'n', '\0'}
    };

    char ch = 'b';

    // Convert the 2D arrays to arrays of pointers to char
    char* resPtr[SIZE];
    const char* arrPtr[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        resPtr[i] = res[i];
        arrPtr[i] = arr[i];
    }

    copy_remove(resPtr, arrPtr, ch);

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

void copy_remove(char* res[3], const char* arr[3], char ch) {


