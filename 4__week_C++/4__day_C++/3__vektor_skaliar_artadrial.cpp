//2 վեկտորներ՝ V1, V2։ Հաշվել այդ վեկտորների սկալյար արտադրյալը՝ V1 * V2:

#include <iostream>

 int skaliar_art(int* vek1, int* vek2, int SIZE); 

int main(){

 const int SIZE = 3;
 int vek1[SIZE];
 int vek2[SIZE];

 std::cout << "vek1\n";
	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek1[i];
	}

 std::cout << "vek2\n";
	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek2[i];
	}

 std::cout << skaliar_art(vek1, vek2, SIZE) << std::endl;

}

int skaliar_art(int* vek1, int* vek2, int SIZE){
	int res = 0;

	for(int i = 0; i < SIZE; ++i){
		res += vek1[i] * vek2[i];
	}

	return res;
}
