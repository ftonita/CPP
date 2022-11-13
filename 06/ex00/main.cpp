#include "Scalar.hpp"

int main (int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; ++i)
		{
			try
			{
				Scalar	obj((std::string(argv[i])));
				obj.parse();
				obj.toChar();
				obj.toInt();
				obj.toFloat();
				obj.toDouble();
			}
			catch (std::string &e)
			{
				std::cout << "Error: " << e << std::endl;
			}
		}
	}
}