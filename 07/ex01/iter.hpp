#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *addr, int len, void(*Foo)(T const &)) {
	for(int i = 0; i < len; i++)
		Foo(addr[i]);
}

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

#endif