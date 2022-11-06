#include "Bureaucrat.hpp"

Bureaucrat::GradeTooLowException::GradeTooLowException(): std::exception {};
Bureaucrat::GradeTooHighException::GradeTooHighException(): std::exception {};
Bureaucrat::GradeTooLowException::~GradeTooLowException(): std::exception {};
Bureaucrat::GradeTooHighException::~GradeTooHighException(): std::exception {};

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{
	
}