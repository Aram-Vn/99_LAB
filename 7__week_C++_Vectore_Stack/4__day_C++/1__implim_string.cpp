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

	char& String::at(int index){
		if((index >= 0 && index <= m_size - 1) && m_ptr != nullptr){
			return m_ptr[index];
		} else {
			std::cout << "there is no such index" << std::endl;
			std::cout << "segmentation fault!!" << std::endl;
			exit(0);
		}
	}

	char& String::front(){
		if(m_ptr != nullptr){
			return m_ptr[0];
		} else {
			std::cout << "there is no such index/nullptr" << std::endl;
			std::cout << "segmentation fault!!" << std::endl;
			exit(0);
		}
	}

	char& String::back(){
		if(m_ptr != nullptr){
			return m_ptr[m_size - 2];
		} else {
			std::cout << "there is no such index/nullptr" << std::endl;
			std::cout << "segmentation fault!!" << std::endl;
			exit(0);
		}
	}

	const char* String::C_ctr(){
		if(m_ptr != nullptr){ 
			return m_ptr;
		} else {
			std::cout << "there is no such index/nullptr" << std::endl;
			std::cout << "segmentation fault!!" << std::endl;
			exit(0);
		}
	}

	bool String::is_empty(){
		if(m_size > 0 && m_ptr != nullptr){
			return false;
		} else {
			return true;
		}
	}


