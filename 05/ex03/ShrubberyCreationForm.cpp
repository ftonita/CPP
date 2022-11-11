#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", target, 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

void ShrubberyCreationForm::action() const {
	std::ofstream openFile;
	openFile.open(this->getTarget() + "_shrubbery");
	if (!openFile.is_open()) {
		std::cout << "Cannot open \"" << this->getTarget() << "_shrubbery" << "\"" << std::endl;
		return ;
	}
	openFile <<
"        W\n" <<                            
"       WWW\n"  <<        
"       WWW\n"    <<      
"      WWWWW\n"     <<    
"W     WWWWW     W\n" <<  
"WWW   WWWWW   WWW\n"   <<
" WWW  WWWWW  WWW\n"    <<
"  WWW  WWW  WWW\n"     <<
"   WWW WWW WWW\n"      <<
"     WWWWWWW\n"        <<
"  WWWW  |  WWWW\n"     <<
"        |\n"           <<
"        |\n";
	openFile.close();
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	this->action();
}