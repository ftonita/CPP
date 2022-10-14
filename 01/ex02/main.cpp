#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "addr STR: " << &str << std::endl;
	std::cout << "addr PTR: " << &stringPTR << std::endl;
	std::cout << "addr REF: " << &stringREF << std::endl;

	std::cout << "STR: " << str << std::endl;
	std::cout << "PTR: " << stringPTR << std::endl;
	std::cout << "REF: " << stringREF << std::endl;

	return (0);
}