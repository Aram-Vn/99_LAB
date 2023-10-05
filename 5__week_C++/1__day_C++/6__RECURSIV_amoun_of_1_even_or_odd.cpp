//tvi erkuakan kodum 1 eri qanakay zuyg e te kent, ete zuyg e tpel 0, hakarak depqum`1; 
#include <iostream>

int even_ones_in_binary(int);
int recc_even_ones_in_bin(int, int);

int main()
{
	int num = 0;
	std::cin >> num;
//	std::cout << even_ones_in_binary(num);	
	std::cout << recc_even_ones_in_bin(num, sizeof(int) * 8) << std::endl;
return  0;

}

int recc_even_ones_in_bin(int num, int i)
{
	if(i == 0)	{
		return 0;
	}	
	return (num & 1) ^ recc_even_ones_in_bin(num >> 1, i - 1);
}
/*
int even_ones_in_binary(int num)
{
	int count = 0;
    int x = 1;
	for(int i = 0; i < sizeof(int) * 8; ++i)
	{
		if (num & x){
			count ^= 1;
		}
        x <<= 1;
	}

return count;
}
*/
int even_ones_in_binary(int num)
{
	int count = 0;
    int x = 1;
	for(int i = 0; i < sizeof(int) * 8; ++i)
	{
		if (num & x){
			count += 1;

		}
        x <<= 1;
	}
return count % 2; 
}
