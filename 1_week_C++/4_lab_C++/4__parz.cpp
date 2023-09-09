#include <iostream>

 void parz (int num);

int main(){

 int num = 0;
 std::cin >> num;
 parz (num);
 
}

	void parz (int num){
		bool check = 1;
			
			for(int i = 2; i < num/2; ++i){
				if(num % i == 0){
					check = 0;
					break;
				}
			}
		if (check){
			std::cout << "YES" << std::endl;
		}
		else{
			std::cout << "NO" << std::endl;
		}
	}
