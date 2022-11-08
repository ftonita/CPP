#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);

	virtual void action() const;
	virtual void execute(const Bureaucrat &executor) const;
};


#endif 