#include <iostream>
#include <cstring>

char** split(const char* s1, char delim) {
    if (s1 == nullptr) {
        return nullptr;
    }

    int numParts = 0;
    const char* ptr = s1;
    while (*ptr) {
        if (*ptr == delim) {
            numParts++;
        }
        ptr++;
    }
    numParts++;

    char** parts = new char*[numParts];

    int partIndex = 0;
    ptr = s1;
    const char* partStart = ptr;

    while (*ptr) {

        if (*ptr == delim) {
            int partLength = ptr - partStart;

            if (partLength > 0) { // Check if the part is not empty

                parts[partIndex] = new char[partLength + 1];
                std::strncpy(parts[partIndex], partStart, partLength);
                parts[partIndex][partLength] = '\0';
                partIndex++;

            }
            partStart = ptr + 1;
        }
        ptr++;
    }

    int partLength = ptr - partStart;
    if (partLength > 0) { // Check the last part for non-emptiness
        parts[partIndex] = new char[partLength + 1];
        std::strncpy(parts[partIndex], partStart, partLength);
        parts[partIndex][partLength] = '\0';
        partIndex++;
    }

    return parts;
}

int main() {
    const char* input = ",This,is,a,test,";
    char** parts = split(input, 'i');
    
    int partIndex = 0;

    while (parts[partIndex]) {
        std::cout << "Part " << partIndex + 1 << ": " << parts[partIndex] << std::endl;
        delete[] parts[partIndex];
        partIndex++;
    }

	int i = 0;

	while(*parts[i]){
		delete[] parts[i];
		++i;
	}
    
    delete[] parts;
    
    return 0;
}

