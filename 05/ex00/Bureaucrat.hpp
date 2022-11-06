#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>

class Bureaucrat
{
	private:

	std::string	_name;
	int			_grade;
	Bureaucrat();

	public:
	~Bureaucrat();

	std::string getName(void) const;
	int			getGrade(void) const;

	void	incrementGrade(int n);
	void	decrementGrade(int n);

	class GradeTooHighException: public std::exception
	{
		public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw ();
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception
	{
		public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw ();
		virtual const char* what() const throw();
	};
	
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif