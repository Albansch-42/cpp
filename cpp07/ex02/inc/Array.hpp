#ifndef ARRAY_HPP
# define ARRY_HPP

template <typename T>
class Array 
{
    private :
        int _n;
            T* _array;
		    std::size_t _n;
    public :
        Array() : _array(NULL), _n(0) {};
        Array(unsigned int n) : _array(new T[n]), _n(n) {}
        Array(const Array& other) : /*_array(NULL)*/ { *this = other; }
        ~Array() { delete[] this->_head; }
};

#endif