#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:
	std::string	_arrayFormNames[3];
	Form *(Intern::*_func[3])(std::string target);

public:
	Intern();
	~Intern();
	Intern(const Intern &copy);

	Intern &operator=(const Intern &copy);
	Form *newShrubberyCreation(std::string target);
	Form *newRobotomyRequest(std::string target);
	Form *newPresidentialPardon(std::string target);
	Form *makeForm(std::string formName, std::string target);

	class FormNotFoundException : public std::exception {
	public:
		FormNotFoundException();
		virtual ~FormNotFoundException() throw ();
		virtual const char* what() const throw();
	};
};


#endif