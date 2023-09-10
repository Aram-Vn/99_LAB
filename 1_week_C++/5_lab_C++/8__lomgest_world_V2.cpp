#include <iostream>

void longest_word(std::string str, int length);

int main() {
    std::string sentence;
    std::getline(std::cin, sentence);

    int length = sentence.length();
    longest_word(sentence , length);
}

void longest_word(std::string str, int length) {
    int max_length = 0;
    int current_length = 0;
    int start_index = 0;
    int max_start = 0;
    int max_end = 0;

    for (int i = 0; i < length; ++i) {
        if (str[i] != ' ') {
            current_length++;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_start = start_index;
                max_end = i;
            }
            start_index = i + 1;
            current_length = 0;
        }
    }

    if (current_length > max_length) {
        max_start = start_index;
        max_end = length;
    }

    // Print the longest word
    for (int j = max_start; j < max_end; ++j) {
        std::cout << str[j];
    }

    std::cout << std::endl;
}

