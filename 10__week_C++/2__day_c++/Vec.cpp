#include <iostream>
#include <limits>
#include <initializer_list>

template <class T>
class Vec
{
public:
	Vec(); // defolt constructor
	~Vec(); // destructor
	Vec(std::initializer_list<T> init_list); // initializer_list constructor
	Vec(size_t new_size, T val = 0);// parameterized constructor where new_size is Vec m_size,
	Vec(const Vec& other); // copy constructor 
	Vec(Vec&& other) noexcept; //move constructor

	T& operator[](int ind) const; //subscript operator overload
	Vec& operator=(const Vec& other); // copy assignment operator overload
	Vec& operator=(Vec&& other) noexcept; // move assignment operator overload

public:
	size_t Size() const; //returns m_size
	size_t Max_size() const; //Returns the maximum number of elements that the vector can hold
	size_t Capacity() const; //return m_cap
	bool Empty() const; // return true if empty	
	void Reserve(size_t new_size);// make m_cap ecual to new_size if new_size > m_cap
	void shrink_to_fit();//Requests the container to reduce its capacity to fit its size.
	
	T& at(int ind) const; // Returns a reference to the element at position ind in the vector.
	T& front() const; // Returns a reference to the first element in the Vec
	T& back() const; // Returns a reference to the last element in the vector
	T* data()  noexcept; //Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
	const T* data() const noexcept; /*(for const objects) Returns a direct pointer to the memory array used 
					internally by the vector to store its owned elements.*/
	void assign(int amount, T val = 0); /*amount (the number of elements to assign) and val (the value to assign to each element).
					     It updates the size of the vector (m_size) to the specified amount */
	void push_back(const T& val); // Adds a new element(num) at the end of the vector,
	void pop_back(); // Removes the last element in the vector, redusing m_size by 1,
	void insert(int ind, const T& val); // inserts the element(val) at given ind, increasing size by 1
	void erase(int ind); // erase element at given position(ind), decreasing size by 1 	
	void swap (Vec& other); /*Exchanges the content of the container by the content of other, which is another Vec object of the same 
				type. Sizes may differ.*/
	void clear(); //Removes all elements from the vector, leaving the container with a size of 0.

 	std::ostream& operator<<(std::ostream& os) const;	

private:	
	void realloc(size_t new_cap = 0);

private:
	size_t m_size;
	size_t m_cap;
	T* m_ptr;
};

template <class T>
std::ostream& operator<<(std::ostream& os, const Vec<T>& obj);



int main(){

 Vec<int> v = {1, 2, 3};

 std::cout << v << std::endl;

}

template <class T>
Vec<T>::Vec() :
	m_size{0},
	m_cap{0},
	m_ptr{nullptr}
{}


template <class T>
Vec<T>::Vec(std::initializer_list<T> init_list) : 
	m_size{0}, m_cap{0}, m_ptr{nullptr}
{
		this->Reserve(init_list.size());

        for (const auto& elem : init_list) {
            this->push_back(elem);
        }
}

template <class T>
Vec<T>::~Vec()
{
	delete[] m_ptr;
	m_size = 0;
	m_cap = 0;
}

template <class T>
Vec<T>::Vec(size_t new_size, T val) :
	m_size{new_size},
	m_cap{2 * m_size},
	m_ptr{new T[m_cap]}
{
	for(int i = 0; i < m_size; ++i){
		m_ptr[i] = val;
	}
}

template <class T>
Vec<T>::Vec(const Vec& other) :
	m_size{other.m_size},
	m_cap{other.m_cap}, 
	m_ptr{new int[m_cap]} 
{
	for(int i = 0; i < m_size; ++i){
		this->m_ptr[i] = other.m_ptr[i]; 
	}
}

template <class T>
Vec<T>::Vec(Vec&& other) noexcept :
	m_size{other.m_size},
	m_cap{other.m_cap}, 
	m_ptr{new int[m_cap]} 
{
	other.m_size = 0;
	other.m_cap = 0;
	other.m_ptr = nullptr;
}

template <class T>
T& Vec<T>::operator[](int ind) const
{
	if(m_ptr == nullptr){
		std::cout << "for[]\nnullptr" << std::endl;
		exit(0);
	}

	if(ind >= 0 && ind < m_size){
		return *(m_ptr + ind);	
	} else {
		std::cout << "in Vec[ind] ind must be >=0 && < size" << std::endl;
		exit(0);
	}
	
}

template <class T>
Vec<T>& Vec<T>::operator=(const Vec& other) 
{
	if(this != &other){
    		if(other.m_size > m_cap){
        		delete[] this->m_ptr;
            		this->m_ptr = new T[other.m_size];
            		this->m_cap = other.m_size;
        	}

        	this->m_size = other.m_size;

        	for (size_t i = 0; i < m_size; ++i) {
            		this->m_ptr[i] = other.m_ptr[i];
          	}
    	}	

	return *this;
}

template <class T>
Vec<T>& Vec<T>::operator=(Vec&& other) noexcept 
{
	if(this != &other){
        	delete[] m_ptr;

        	this->m_size = other.m_size;
        	this->m_cap = other.m_cap;
        	this->m_ptr = other.m_ptr;

        	other.m_size = 0;
        	other.m_cap = 0;
    		other.m_ptr = nullptr;
  	 }

	return *this;
}

template <class T>
size_t Vec<T>::Size() const
{
	return m_size;
}

template <class T>
size_t Vec<T>::Max_size() const
{
	return std::numeric_limits<size_t>::max() / sizeof(T);
}

template <class T>
size_t Vec<T>::Capacity() const
{
	return m_cap;
}	

template <class T>
bool Vec<T>::Empty() const
{
	return m_size = 0;
}

template <class T>
void Vec<T>::realloc(size_t new_cap)
{
	if(new_cap == 0){
		m_cap = (m_cap) ? 2 * m_cap : 1;
	} else {
		m_cap = new_cap;
	}	

	T* tmp_ptr = new T[m_cap];

		for(size_t i = 0; i < m_size; ++i){
			tmp_ptr[i] = m_ptr[i]; 
		}

	delete m_ptr;
	m_ptr = tmp_ptr;
}

template <class T>
void Vec<T>::Reserve(size_t new_cap)
{
	if(m_ptr == nullptr){
		realloc();
	}

	if(m_cap < new_cap){
		realloc(new_cap);
	}
}

template <class T>
void Vec<T>::shrink_to_fit()
{
	if(m_ptr != nullptr){
		realloc(m_size);
	}

}

template <class T>
T& Vec<T>::at(int ind) const
{
	if(m_ptr != nullptr){
		if(ind >= 0	&& ind < m_size){
			return m_ptr[ind];
		} else {
			std::cout << "(at)\nind must be >= 0 and less than Vec size!!" << std::endl;
			exit(0);
		}
	} else {
		std::cout << "(at)\nnullptr" << std::endl;
		exit(0);
	}
}

template <class T>
T& Vec<T>::front() const
{
	if(m_ptr != nullptr){
		return m_ptr[0];
	} else {
		std::cout << "(front)\nnullptr" << std::endl;
	}

}

template <class T>
T& Vec<T>::back() const
{
	if(m_ptr != nullptr){ 
		return m_ptr[m_size - 1];
	} else {
		std::cout << "(back)\nnullptr" << std::endl;
	}
}

template <class T>
T* Vec<T>::data() noexcept
{
	return m_ptr;
}

template <class T>
const T* Vec<T>::data() const noexcept
{
	return m_ptr;
}

template <class T>
void Vec<T>::assign(int amount, T val)
{

	if(amount < 0){
		std::cout << "in assign function first argument must be >= 0" << std::endl;
		exit(0);
	}

	if(amount > m_cap){
		realloc(amount);
	}

	m_size = amount;
	
	for(int i = 0; i < m_size; ++i){
		m_ptr[i] = val;
	}
}


template <class T>
void Vec<T>::push_back(const T& val)
{
	if(m_size == m_cap){ 
		realloc();
	}
	
	m_ptr[m_size++] = val;
}

template <class T>
void Vec<T>::pop_back(){
	if(m_ptr != nullptr && m_size > 0){
		--m_size;
	} else {
		std::cout << "(pop_back)\nVec is empty can't pop_back" << std::endl;
		exit(0);
	}
}

template <class T>
void Vec<T>::insert(int ind, const T& val)
{
	if(m_ptr != nullptr){
		if(ind >= 0 && ind < m_size){
			if(m_size == m_cap){ 
				realloc();
			}
	
			for (size_t i = m_size; i > ind; --i) {
	           		m_ptr[i] = m_ptr[i - 1];
        		}		
		
			m_ptr[ind] = val;
			++m_size;	

		} else {
			std::cout << "in insert function first argument must be >= 0 and less than size" << std::endl;
			exit(0);
		}
	} else {
		std::cout << "(insert)\nnullptr" << std::endl;
		exit(0);
	}
}

template <class T>
void Vec<T>::erase(int ind)
{
	if(m_ptr != nullptr){
		if(ind >= 0 && ind < m_size){
			for(int i = ind; i < m_size; ++i){
				m_ptr[i] = m_ptr[i + 1];
			}

			--m_size;
		} else {
			std::cout << "in erase function must get argument which is >= 0 and less than size" << std::endl;
			exit(0);
		}
	} else {
		std::cout << "(erase)\nnullptr" << std::endl;
		exit(0);
	}
	
}
	
template <class T>
void Vec<T>::swap (Vec& other)
{
	size_t tmp_Size = m_size;
        m_size = other.m_size;
        other.m_size = tmp_Size;

        size_t tmp_Cap = m_cap;
        m_cap = other.m_cap;
        other.m_cap = tmp_Cap;

        T* tmp_Ptr = m_ptr;
        m_ptr = other.m_ptr;
        other.m_ptr = tmp_Ptr;
}

template <class T>
void Vec<T>::clear()
{
	m_size = 0;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const Vec<T>& obj)
{
	return obj.operator<<(os);
}

template <class T>
std::ostream& Vec<T>::operator<<(std::ostream& os) const
{
	for(int i = 0; i < m_size; ++i){
		os << m_ptr[i] << " ";
	}
	return os;
}
