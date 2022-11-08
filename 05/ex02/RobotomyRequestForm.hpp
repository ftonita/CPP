#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &copy);

	virtual void action() const;
	virtual void execute(const Bureaucrat &executor) const;
};


#endif