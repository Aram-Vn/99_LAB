#include <iostream>

struct Vector
{
private:
	int* m_ptr;
	int m_size;
	int m_capacity;
public:
	void constructor(){
		m_ptr = nullptr;
		m_size = 0;
		m_capacity = 0;
	}

	void destructor(){
		if(m_ptr){
			m_ptr = nullptr;
		}
		m_size = 0;
		m_capacity = 0;
	}

	int get_size(){
		return m_size;
	}
	
	int get_capacity(){
		return m_capacity;
	}	

	void Push_back(int tmp){
 		if(!m_ptr){
					
		}		
	}
};

int main(){

 Vector obj;
 obj.constructor();

 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;

 obj.destructor();
}
