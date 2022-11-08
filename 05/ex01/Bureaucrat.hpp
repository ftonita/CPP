#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>


# define MIN_GRADE 150
# define MAX_GRADE 1

class Form;

class Bureaucrat
{
	private:

	const std::string	_name;
	int			_grade;
	Bureaucrat();

	public:
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);

	Bureaucrat &operator=(const Bureaucrat &copy);
	Bureaucrat(const Bureaucrat &copy);

	const std::string getName(void) const;
	int			getGrade(void) const;

	void	incrementGrade(int n);
	void	decrementGrade(int n);

	void signForm(Form &form);
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

# include "Form.hpp"

#endif