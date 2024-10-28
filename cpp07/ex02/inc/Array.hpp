#ifndef ARRAY_HPP
# define ARRY_HPP

template <typename T>
class Array 
{
    private :
        T* _array;
		std::size_t _size;
    
    public :
        Array() : _array(NULL), _size(0) {}

        Array(unsigned int n) : _array(new T[n]), _size(n) {}

        Array(const Array& other) : _array(NULL) { *this = other; }

        Array& operator=(const Array& other) {
            if (this != &other) {
                if (_array != NULL)
                    delete[] _array;
                _size = other._size;
                _array = new T[_size];
                for (size_t i = 0; i < _size; ++i) {
                    _array[i] = other._array[i];
                }
            }
            return *this;
        }

        ~Array() { delete[] this->_array; };

        T& operator[](size_t i) {
            if (i >= _size) {
                throw std::out_of_range("Index out of bounds");
            }
            return _array[i];
        }

        std::size_t size() {
            return _size;
        }

};

#endif