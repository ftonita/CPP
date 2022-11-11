#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{
	try
	{
		srand(time(NULL));
		Bureaucrat	nick("Nick", 150);
		Bureaucrat	tom("Tom", 1);
		Form		*form;
		Intern		intern;
		std::string pardon = "presidential pardon";
		std::string request = "robotomy request";
		std::string creation = "shrubbery creation";
		std::cout << "----------------------------------------------------------" << std::endl;
		try
		{
			std::cout << "\033[1;33m";
			form = intern.makeForm(creation, "Home");
			std::cout << "\033[0m";
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.signForm(*form);
			tom.signForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m";
			delete form;
		}
		catch (const std::exception& e)
		{
			std::cout << "\033[1;31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "----------------------------------------------------------" << std::endl;
		try
		{
			std::cout << "\033[1;33m";
			form = intern.makeForm(request, "Home");
			std::cout << "\033[0m";
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.signForm(*form);
			tom.signForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m";
			delete form;
		}
		catch (const std::exception& e)
		{
			std::cout << "\033[1;31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "----------------------------------------------------------" << std::endl;
		try
		{
			std::cout << "\033[1;33m";
			form = intern.makeForm(pardon, "Home");
			std::cout << "\033[0m";
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.signForm(*form);
			tom.signForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m";
			delete form;
		}
		catch (const std::exception& e)
		{
			std::cout << "\033[1;31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "----------------------------------------------------------" << std::endl;
		try
		{
			std::cout << "\033[1;33m";
			form = intern.makeForm("НЕСУЩЕСТВУЮЩАЯ ФОРМА", "Home");
			std::cout << "\033[0m";
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.signForm(*form);
			tom.signForm(*form);
			std::cout << "\033[0m" <<std::endl;
			std::cout << "\033[1;33m" << nick << "\n\033[0m" << "\033[1;33m" << tom << "\n\033[0m\033[1;35m" << *form << "\033[0m" <<std::endl <<std::endl;
			std::cout << "\033[1;34m";
			nick.executeForm(*form);
			tom.executeForm(*form);
			std::cout << "\033[0m";
			delete form;
		}
		catch (const std::exception& e)
		{
			std::cout << "\033[1;31m" << e.what() << "\033[0m" << std::endl;
		}
		std::cout << "----------------------------------------------------------" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "\033[1;31mBureaucrat failure: " << e.what() << "\033[0m" << std::endl;
	}
	return (0);
}