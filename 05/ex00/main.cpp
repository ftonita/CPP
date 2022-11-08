#include "Bureaucrat.hpp"

int main(void)
{
	std::string name;
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Lower";
		Bureaucrat n(name, 150);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Higher";
		Bureaucrat n(name, 1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Lower than necessary";
		Bureaucrat n(name, 151);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Higher than necessary";
		Bureaucrat n(name, 0);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Medium";
		Bureaucrat n(name, 75);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Lower-1";
		Bureaucrat n(name, 150);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.decrementGrade(1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Higher+1";
		Bureaucrat n(name, 1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.incrementGrade(1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;try
	{
		name = "Higher-1";
		Bureaucrat n(name, 1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.decrementGrade(1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;try
	{
		name = "Lower+1";
		Bureaucrat n(name, 150);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.incrementGrade(1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Medium-10";
		Bureaucrat n(name, 75);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		n.decrementGrade(1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
	try
	{
		name = "Medium+10";
		Bureaucrat n(name, 75);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		n.incrementGrade(1);
		std::cout << "\033[1;32mYES:" << n << "\033[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mNO:" << name << ": " << e.what() << "\033[0m" << std::endl;
	}
	std::cout << "---------------------------" << std::endl;

	return 0;
}