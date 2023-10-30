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

	void String::reallocator(int amout = 10){
		m_cap += amout + 10;
		char* tmp_ptr = new char[m_cap];
	
			for(int i = 0; i < m_size; ++i){
				tmp_ptr[i] = m_ptr[i];
			}
		delete[] m_ptr;
		m_ptr = tmp_ptr;
		tmp_ptr = nullptr;	
	}

	int String::Size(const char* str){
		int tmp = 0;
		
		while(str[tmp]){
			++tmp;
		}

		return tmp;
	}

	void String::push(const char* new_str){
		if(m_ptr = nullptr){
			allocator();
		}	
		
		int str_size = Size(new_str);
	
		if(m_cap < str_size){
			while(m_cap < str_size){
				reallocator();
			}	
		}
		m_size = str_size;
		
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

	void String::insert(int index, char ch){
		if(!is_empty() && (index >= 0 && index < m_size) && m_ptr != nullptr){
			++m_size;

			if(m_size > m_cap){
				reallocator();
			}

			for(int i = m_size; i > index - 1; --i){
				m_ptr[i + 1] = m_ptr[i];
			}

			m_ptr[index] = ch;
	
		}
	}

	void String::erase(int index, int amount = 0){
		if(!is_empty() && (index >= 0 && index < m_size) && m_ptr != nullptr){
			if(amount == 0){
				for(int i = index; i < m_size; ++i){
					m_ptr[i] = m_ptr[i + 1]; 
				}
				--m_size;
			}
			else if(amount > 0){
				if((m_size - amount) >= index){
					for(int i = index; i < m_size; ++i){
						m_ptr[i] = m_ptr[i + amount]; 
					}
					m_size -= amount;
				} else {
					std::cout << "second argument is too big" << std::endl;
					std::cout << "amount is to big" << std::endl;
				}				
			}
		}
		else{
		std::cout << "erase:: there is no such index || nullptr" << std::endl;
		return;
		}
	}

	void String::push_back(char ch){
		if(m_ptr != nullptr){
			++m_size;
	
			if(m_size > m_cap){
				reallocator();
			}
			m_ptr[m_size - 1] = ch;
		} else {
			Error();
		}
		
	}

	void String::pop_back(){
		if(m_ptr != nullptr){
			--m_size;
			m_ptr[m_size] = '\0';
		} else {
			Error();
		}
	}

	void String::append(const char* str){
		int str_size = Size(str);
		int last = m_size - 1;
	
		m_size += str_size;	
	
		while(str_size > m_cap){
			reallocator();
		} 

		int j = last;		

		for(int i = 0 ; i <= str_size; ++i){
			m_ptr[j] = str[i];
			++j;
		} 	
		m_ptr[m_size] = '\0';
	}

	char* String::substr(int index){
		if(!is_empty() && index >= 0 && index < m_size){
			char* ch = &m_ptr[index];
		}
	}

	void String::copy(char* str, int amount, int index = 0){
		if(!is_empty() && index >= 0 && index < m_size && (m_size - index) >= amount){ 			
			if(index == 0){
				for(int i = 0; i < amount; ++i){
					str[i] = m_ptr[i];
				}
				str[amount] = '\0';
				return;
			} else {
				int j = index;
				for(int i = 0; i < amount; ++i){
					str[i] = m_ptr[j];
					++j;
				}
				str[amount] = '\0';
			}		
		}
	} 

void String::resize(int count, char ch = '\0'){
		if(count > m_size){	

			if(m_cap < (m_size + count)){
				reallocator((m_size + count) - m_cap);
			}	
		
			int tmp = m_size;
			m_size += count;
	
			if(ch == '\0'){
				for(int i = tmp - 1; i < m_size; ++i){
					m_ptr[i] =  ch;
				}
			} else {
				for(int i = tmp; i < m_size - tmp; ++i){
					m_ptr[i] = ch;
				}
				m_ptr[m_size] = '\0';
			}
		} else {
			m_size = count;
		}
	}

char* String::set_get_123456789(char* new_ptr = nullptr, int new_size = 0, int new_cap = 0){
	if(new_ptr = nullptr){
		return m_ptr;	
	} else {
		m_size = new_size;
		m_cap = new_cap;
		m_ptr = new_ptr;
	}
	return nullptr;
}

void String::swap(String& other){
	char* tmp_ptr = m_ptr;

	m_ptr = set_get_123456789();	

	int tmp_size = m_size;
	int tmp_cap = m_cap;

	set_get_123456789(tmp_ptr, m_size, m_cap);

	m_size = tmp_size;
	m_cap = tmp_cap;
} 
