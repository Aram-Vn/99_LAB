//2 վեկտորներ՝ V1, V2։ Հաշվել այդ վեկտորների գումարը՝ V1 + V2:

#include <iostream>

 void sum_of_vek(int* res, int* vek1, int* vek2, int SIZE);

int main(){

 const int SIZE = 3;
 int res[SIZE];
 int vek1[SIZE];
 int vek2[SIZE];

 std::cout << "VEK1\n";
	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek1[i];
	}

 std::cout << "VEK2\n";
	for(int i = 0; i < SIZE; ++i){
		std::cin >> vek2[i];
	}

 sum_of_vek(res, vek1, vek2, SIZE);

	
 std::cout << "******\nRES\n";
	for(int i = 0; i < SIZE; ++i){
		std::cout << res[i] << " ";
	}
 std::cout << std::endl;
}

void sum_of_vek(int* res, int* vek1, int* vek2, int SIZE){

	for(int i = 0; i < SIZE; ++i){
		res[i] = vek1[i] + vek2[i];
	}
}
