#include "Bureaucrat.hpp"

Bureaucrat::GradeTooLowException::GradeTooLowException(): std::exception() {};
Bureaucrat::GradeTooHighException::GradeTooHighException(): std::exception() {};
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {};
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {};

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this == &copy)
		return *this;
	this->_grade = copy.getGrade();
	return *this;
}

const std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade(int n) {
	this->_grade -= n;
	if (this->_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::decrementGrade(int n) {
	this->_grade += n;
	if (this->_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "\n";
	return os;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what();
	}
	catch (std::string reasonAlreadySigned) {
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << reasonAlreadySigned;
	}
}