#include <iostream>
#include "Stack.hpp"

int main(){

 std::cout << "SIZE" << std::endl;
 
 Stack obj;
 obj.constructor();

 std::cout << "SIZE" << obj.Size() << "\n****" << std::endl;

	for(int i = 0; i < 5; ++i){
		obj.Push(i);
	}

 std::cout << "SIZE" << obj.Size() << "\n****" << std::endl;
	

	for(int i = 0; i < 5; ++i){
		std::cout << obj.Top() << std::endl;
		obj.Pop();	
	}
}
