#include "Intern.hpp"

Intern::Intern() {
	this->_arrayFormNames[0] = "shrubbery creation";
	this->_arrayFormNames[1] = "robotomy request";
	this->_arrayFormNames[2] = "presidential pardon";

	this->_func[0] = &Intern::newShrubberyCreation;
	this->_func[1] = &Intern::newRobotomyRequest;
	this->_func[2] = &Intern::newPresidentialPardon;
}

Intern::~Intern() {}

Intern::FormNotFoundException::FormNotFoundException() {}

Intern::FormNotFoundException::~FormNotFoundException() throw() {}

const char *Intern::FormNotFoundException::what() const throw() {
	return "Form is not found";
}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator=(const Intern &copy) {
	if (this == &copy)
		return *this;
	return *this;
}

Form *Intern::newShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form *Intern::newRobotomyRequest(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form *Intern::newPresidentialPardon(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string formName, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (formName == this->_arrayFormNames[i]) {
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*_func[i])(target));
		}
	}
	throw FormNotFoundException();
}