#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	virtual void action() const;
	virtual void execute(const Bureaucrat &executor) const;
};


#endif