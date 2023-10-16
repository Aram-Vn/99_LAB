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

private:
	void allocator(){
		m_ptr = new int [10];
		m_capacity = 10;
	}

	void reallocator(){
		m_capacity += 10;
		int* tmp_ptr = new int[m_capacity];
		
		for(int i = 0; i < m_size; ++i){
			tmp_ptr[i] = m_ptr[i];
		}
		delete[] m_ptr;
		m_ptr = tmp_ptr;
		tmp_ptr = nullptr;		
	}

public:
	void Push_back(int tmp){
 		if(!m_ptr){
			allocator();
		}		
		
		if(m_size == m_capacity){
			reallocator();
		}

		m_ptr[m_size++] = tmp;
	}

	void Pop_back(){
		if(m_size != 0){
			m_size -= 1; 
		}
	}

	void print(){
		for(int i = 0; i < m_size; ++i){
			std::cout << m_ptr[i] << " ";
		}
		std::cout << std::endl;
	}
};

int main(){

 Vector obj;
 obj.constructor();

 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;
 
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);
 obj.Push_back(5);

 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;

 obj.print();

 obj.Pop_back();
 obj.Pop_back();
 obj.Pop_back();
 
 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;
 
obj.print();

 obj.destructor();
}
