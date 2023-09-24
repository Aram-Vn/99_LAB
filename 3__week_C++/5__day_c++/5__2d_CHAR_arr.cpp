#include <iostream>
void copy(char (*res)[5], const char (*p)[5], char x) {
	const char* pp = *p;

	while (*pp != '\0') {

	    const char* tmp = *p;
	    char* tmp_res = *res;

		while (*tmp != '\0') {

			if (*tmp != x) {

				*tmp_res = *tmp;

			} 
			else {

				*tmp_res = ' ';

			}
			++tmp;
			++tmp_res;
		}
		*tmp_res = '\0';
		*p++;
		*res++;
		++pp;
	}
}
int main() {
    char res[5][5];
    const char p[5][5] = {{'a', 'b', 'c', 'd', '\0'},
                          {'e', 'f', 'g', 'h', '\0'},
                          {'a', 'j', 'a', 'l', '\0'},
                          {'m', 'n', 'o', 'p', '\0'},
                          {'q', 'a', 's', 'a', '\0'}
                         };
    char x = 'a';

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << p[i][j] << " ";
        }
        std::cout << std::endl;
    }

	std::cout << std::endl; 

    copy(res, p, x);

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << res[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
