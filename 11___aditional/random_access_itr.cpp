#include <iostream>
#include <vector>

template <typename T>
class Vec
{
public:
    class random_access_itr
    {
    public:
        random_access_itr() : ptr(nullptr) {}

        random_access_itr(T* ptr1) : ptr(ptr1) {}

        random_access_itr&  operator= (const random_access_itr& other) {
            this->ptr = other.ptr;
            return *this;
        }
 
        T& operator* () {
            return *ptr;
        }

        T* operator-> () {
            return ptr;
        }

        random_access_itr& operator++ () {
            ++ptr;
            return *this;
        }

        random_access_itr operator++ (int) {
            random_access_itr tmp = *this;
            ++ptr;
            return tmp;
        }

        random_access_itr operator+ (const int n) {
            random_access_itr tmp = *this;

            for (int i = 0; i < n; ++i) {
                ++tmp.ptr;
            }

            return tmp;
        }

        random_access_itr operator- (const int n) {
            random_access_itr tmp = *this;

            for (int i = 0; i < n; ++i) {
                --tmp.ptr;
            }

            return tmp;
        }

        random_access_itr& operator-= (const int n) {
            for (int i = 0; i < n; ++i) {
                --this->ptr;
            }

            return *this;
        }

        random_access_itr& operator+= (const int n) {
            for (int i = 0; i < n; ++i) {
                ++this->ptr;
            }

            return *this;
        }

        bool operator== (const random_access_itr& other) {
            return this->ptr == other.ptr; 
        }

        bool operator!= (const random_access_itr& other) {
            return !(this->ptr == other.ptr);
        }

    private:
        T* ptr;
    };

public:
    Vec (std::initializer_list<T> list) : vec(list) {}

public:
    using r_itr = random_access_itr;
    
    r_itr begin() {
        return r_itr(vec.data());
    }

    r_itr end() {
        return r_itr(vec.data() + vec.size());
    }



private:
    std::vector<T> vec;
};

int main () {

    Vec<int> vec = {1, 2, 3, 4, 5, 6};
    Vec<int>::r_itr fit;

    fit = vec.end() - 2;

    for(Vec<int>::r_itr fit1 = vec.begin() + 2; fit1 != fit; ++fit1) {
        std::cout << *fit1 << " ";
    }
    std::cout << std::endl;
}