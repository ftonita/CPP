#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct	Data
{
	int	p;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif