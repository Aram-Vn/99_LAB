#include <iostream>
#include "1__proto_string.hpp"

	void String::constructor(){
		m_size = 0;
		m_cap = 0;
		m_ptr = nullptr;
 	}

	void String::destructor(){
		if(m_ptr != nullptr){	
			m_ptr = nullptr;
		}
		m_size = 0;
		m_cap = 0;
	}

	int String::get_size(){
		return m_size;
	}

	int String::get_cap(){
		return m_cap;
	}

	char* String::get_ptr(){
		return m_ptr;
	}

	void String::allocator(){
		m_ptr = new char[10];
		m_cap = 10;
	}

	void String::reallocator(){
		m_cap += 10;
		char* tmp_ptr = new char[m_cap];
	
			for(int i = 0; i < m_size; ++i){
				tmp_ptr[i] = m_ptr[i];
			}
		delete[] m_ptr;
		m_ptr = tmp_ptr;
		tmp_ptr = nullptr;	
	}

	void String::push(const char* new_str){
		if(m_ptr = nullptr){
			allocator();
		}	
		
		int tmp = 0;
	
		while(new_str[tmp]){
			++tmp;
		}
	
		if(m_cap < tmp){
			while(m_cap < tmp){
				reallocator();
			}	
		}
		m_size = tmp;
		
		for(int i = 0; i < m_size; ++i){
			m_ptr[i] = new_str[i];
		}

		m_ptr[m_size + 1] ='\0';

	}

	void String::print(){
		if(m_ptr != nullptr){
			const char* ch = m_ptr;
			std::cout << ch << std::endl;
		}
	}

	void String::Error(){
		std::cout << "there is no such index" << std::endl;
		std::cout << "segmentation fault!!" << std::endl;
		exit(0);
	}

	char& String::at(int index){
		if((index >= 0 && index <= m_size - 1) && m_ptr != nullptr){
			return m_ptr[index];
		} else {
			Error();
		}
	}

	char& String::front(){
		if(m_ptr != nullptr){
			return m_ptr[0];
		} else {
			Error(); 
		}
	}

	char& String::back(){
		if(m_ptr != nullptr){
			return m_ptr[m_size - 2];
		} else {
			Error(); 
		}
	}

	const char* String::C_ctr(){
		if(m_ptr != nullptr){ 
			return m_ptr;
		} else {
			Error(); 
		}
	}

	bool String::is_empty(){
		if(m_size > 0 && m_ptr != nullptr){
			return false;
		} else if(m_ptr != nullptr){
			std::cout << "nullptr" << std::endl;
			exit(0);
		}
		return true;
	}

	void String::reserve(int new_cap){
		if(new_cap > m_cap){
			m_cap = new_cap;

			char* tmp_ptr = new char[m_cap];

			for(int i = 0; i < m_size; ++i){
				tmp_ptr[i] = m_ptr[i];
			}
			
			delete [] m_ptr;
			m_ptr = tmp_ptr;
			tmp_ptr = nullptr;
		}
	}

	void String::shrink_to_fit(){
		if(m_ptr != nullptr && m_size != m_cap){
			m_cap = m_size;
			char* tmp_ptr = new char[m_cap];

			for(int i = 0; i < m_size; ++i){
				tmp_ptr[i] = m_ptr[i];
			}
			delete[] m_ptr;
			m_ptr = tmp_ptr;
			tmp_ptr = nullptr;
		}		
	}




