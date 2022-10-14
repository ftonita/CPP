#include "Replace.hpp"

Replace::Replace()
{

}

Replace::~Replace()
{

}

std::string Replace::ft_replace(std::string line, std::string str1, std::string str2)
{
	std::string result;
	std::string::size_type next = 0;
	size_t prev;
	while(1)
	{
		prev = next;
		next = line.find(str1, prev);
		result.append(line.substr(prev, next - prev));
		if (next == std::string::npos)
			break;
		result.append(str2);
		next += str1.length();
	}
	return result;
}