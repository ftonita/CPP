#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Form
{
private:
	Form();
	const std::string _name;
	bool		_isSigned;
	const int 	_gradeToSign;
	const int 	_gradeToExecute;

public:
	virtual ~Form();

	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &copy);

	void beSigned(Bureaucrat &bureaucrat);
	const std::string getName() const;
	bool getSignatureStatus() const;
	int getGradeSign() const;
	int getGradeExecute() const;

	class GradeTooHighException: public std::exception
	{
		public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
		const char *what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif