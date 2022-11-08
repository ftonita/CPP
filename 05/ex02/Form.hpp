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

	const std::string _target;

	public:

	virtual ~Form();

	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &copy);

	Form(std::string name, std::string target, int gradeToSign, int gradeToExecute);

	void beSigned(Bureaucrat &bureaucrat);
	const std::string getName() const;
	bool getSignatureStatus() const;
	int getGradeSign() const;
	int getGradeExecute() const;

	const std::string getTarget() const;
	virtual void action() const = 0;
	virtual void execute(const Bureaucrat &executor) const;

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

	class	SignatureException : public std::exception {
	public:
		SignatureException();
		virtual ~SignatureException() throw ();
		virtual const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif