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

	int& at(int index){
		if((index >= 0 && index <= m_size) && m_ptr != nullptr){
			return m_ptr[index];
		}
		else{
			std::cout << "there is no such index" << std::endl;
			std::cout << "segmentation fault!!!!!!" << std::endl;
			exit(0);
		}	
	}

	int& front(){
		if(m_ptr != nullptr){
			return m_ptr[0];
		}
		else{
			std::cout << "there is no such index" << std::endl;
			std::cout << "segmentation fault!!!!!!" << std::endl;
			exit(0);
		}
	}	

	int& back(){
		if(m_ptr != nullptr){
			return m_ptr[m_size - 1];
		}
		else{
			std::cout << "there is no such index" << std::endl;
			std::cout << "segmentation fault!!!!!!" << std::endl;
			exit(0);
		}
	}

	void shrink_to_fit(){
		if(m_ptr != nullptr && m_size != m_capacity){
			m_capacity = m_size;
			int* tmp_ptr = new int[m_size];			

			for(int i = 0; i < m_size; ++i){
				tmp_ptr[i] = m_ptr[i];
			}
			
			delete[] m_ptr;
			m_ptr = tmp_ptr;
			tmp_ptr = nullptr;
		}
	}

	void clear(){
		if(m_size != 0 && m_ptr != nullptr){
			m_size = 0;
		}
	}

	void insert(int index, int num){
		if(!empty() && index >= 0 && index < m_size && m_ptr != nullptr){

			
				if(m_size > m_capacity){
					reallocator();
				}

			std::cout << "SIZE" << m_size << std::endl;

			for(int i = m_size; i > index - 1; --i){
				m_ptr[i + 1] = m_ptr[i]; 				
			}
	
			m_ptr[index] = num;

			++m_size;
		}
	}

	void erase(int index){
		int tmp = 0;
		
		if(m_size != 0 && m_ptr != nullptr){
			for(int i = index; i < m_size; ++i){
				m_ptr[i] = m_ptr[i + 1];				
			}  
			--m_size;
		}
	}	

	bool empty(){
		if(m_size == 0){
			return true;
		}
		
		return false;
	}

	void resize(int new_size){

		if(m_ptr == nullptr){
			std::cout << "nullptr" << std::endl;
			exit(0);
		}

		if(new_size < 0){
			std::cout << "NO!! new_size must be >= 0" << std::endl;
			exit(0);
		}

		if(new_size == m_size){
			return;
		}

		if(new_size < m_size){
			m_size = new_size;
		}

		if(new_size > m_capacity){
			while(new_size < m_capacity){
				reallocator();
			}
			m_size = new_size;
		}
	}
	
	int* get_set_123456789(int* new_ptr = nullptr, int new_size = 0, int new_cap = 0){
		if(new_ptr == nullptr){
			return m_ptr;
		}
		else{
			m_ptr = new_ptr;
			m_size = new_size;
			m_capacity = new_cap;
			new_ptr = nullptr;
		}
		return nullptr;
	}

	void swap (Vector& obj2){
		int* tmp = m_ptr;

		m_ptr = obj2.get_set_123456789();

		int tmp_size = obj2.get_size();
		int tmp_cap = obj2.get_capacity();

		m_size = tmp_size;
		m_capacity = tmp_cap;

		obj2.get_set_123456789(tmp, tmp_size, tmp_cap);
		tmp = nullptr;
	} 
};

int main(){

 Vector obj;
 obj.constructor();

 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;
	 
	for(int i = 0; i < 16; ++i){
		obj.Push_back(i);
	}

 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;

 obj.print();

 obj.Pop_back();
 obj.Pop_back();
 obj.Pop_back();
 
 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;

 obj.print();

 std::cout << "4 IND" << std::endl;
 obj.insert(4, 66);
 
 obj.print();

 std::cout << "ERASE 4" << std::endl;

 obj.erase(4);

 obj.print();
 std::cout << obj.at(2) << std::endl;
 std::cout << obj.at(8) << std::endl;
// std::cout << obj.at(55) << std::endl;
 
 obj.shrink_to_fit();

 std::cout << "sh" << std::endl;
 std::cout << obj.get_size() << std::endl;
 std::cout << obj.get_capacity() << std::endl;

 Vector obj2;
 obj2.constructor();
 obj2.Push_back(2);
 obj2.Push_back(22);
 obj2.Push_back(222);
 
 std::cout << "OBJ2" << std::endl;	
 std::cout << obj2.get_size() << std::endl;
 std::cout << obj2.get_capacity() << std::endl;
 obj2.print();
 std::cout << "Swap" << std::endl;

 obj.swap(obj2);
 std::cout << "OBJ2" << std::endl;	
 obj2.print();
 std::cout << "OBJ" << std::endl;	
 obj.print();

 obj.destructor();
}
