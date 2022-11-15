#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
    public:
        Array() : _arr(nullptr), _n(0), _size(0) {};

        Array(unsigned int c) : _size(c)
        {
			if (_size < 0)
				throw (IndexOutOfBounds());
            this->_n = c;
            if (c == 0)
                _arr = nullptr;
            else
                _arr = new T[c];
        };

        Array(const Array &copy)
        {
            this->_arr = new T[copy._n];
            _n = copy._n;
			_size = copy._size;
            for (unsigned int i = 0; i < _n; i++)
                _arr[i] = copy._arr[i];
        };

        Array &operator=(const Array &copy)
        {
            if (this == &copy)
                return (*this);
            if (_arr)
				delete[] _arr;
            _n = copy._n;
			_size = copy._size;
			this->_arr = new T[_n];
			for (unsigned int i = 0; i < _n; i++)
				_arr[i] = copy._arr[i];
            return (*this);
        };

        ~Array()
        {
            if (_arr)
                delete [] _arr;
        };

        int size(void)
        {
            return (_n);
        }

        class IndexOutOfBounds : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("Array index out of bounds!");
                }
        };

        T &operator[](unsigned int idx)
        {
                if (idx >= _n || idx < 0 || _arr == nullptr)
                    throw (IndexOutOfBounds());
                return (_arr[idx]);
        }

        const T &operator[](unsigned int idx) const
        {
                if (idx >= _n || idx < 0 || _arr == nullptr)
                    throw (IndexOutOfBounds());
                return (_arr[idx]);
        }

    private:
        T *_arr;
        unsigned int _n;
		int _size;
};

#endif