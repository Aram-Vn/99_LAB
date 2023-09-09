#include <iostream>

 int patik(int num);
 int reverse(int num1);
 int check_polindrome(int num2);

int main(){

 int num = 0;
 std::cin >> num;
 std::cout << check_polindrome(num) << std::endl;

}

	int patik(int num)
	{
		int patik = 1;

			while(num > 10){
				num /= 10;
				patik *= 10;
			}

		return patik;
	}

	int reverse(int num1)
	{
		int reversed = 0;
		int tmp_num = 0;

			while(num1 != 0){
				tmp_num = num1 % 10;
				reversed = reversed * 10 + tmp_num;
				num1 /= 10;
			}	

		return reversed;
	}

	int check_polindrome(int num2)
	{
		int reversed = reverse(num2);
		int sum = 0;
		int count = 0;

			while(1){
				sum = num2 + reversed;
				++count;
				num2 = sum;
				reversed = reverse(sum);
					if(sum == reverse(sum)){
						break;
					}
			}
		return count;
	}		
