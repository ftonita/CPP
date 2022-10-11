#include "phonebook.hpp"

PhoneBook::PhoneBook(/* args */)
{
    this->_contact_count = 0;
}

PhoneBook::~PhoneBook()
{
    std::cout << "Destructor was called (Phonebook)" << std::endl;
}

void    PhoneBook::getMan(void) const
{
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|                 AWESOME PHONE BOOK                    |\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|  Welcome in the 80s and its unbelievable technology!  |\n";
    std::cout << "|  I present to your attention the \"PhoneBook\"          |\n";
    std::cout << "|  Here you can save up to 8 contacts - try it!         |\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|                  AVAILABLE COMMANDS                   |\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|                                                       |\n";
    std::cout << "|     ADD     -   use this command to add contact       |\n";
    std::cout << "|                 to phone book                         |\n";
    std::cout << "|                                                       |\n";
    std::cout << "|     SEARCH  -   shows a list of contacts,             |\n";
    std::cout << "|                 then you need to enter the serial     |\n";
    std::cout << "|                 number of the contact to view         |\n";
    std::cout << "|                 the detailed information.             |\n";
    std::cout << "|                 0 to exit from search                 |\n";
    std::cout << "|                                                       |\n";
    std::cout << "|     EXIT    -   exit from PhoneBook                   |\n";
    std::cout << "|                 ATTENTION! All contacts will be lost! |\n";
    std::cout << "|                                                       |\n";
    std::cout << "+-------------------------------------------------------+\n";
}

void	PhoneBook::_getAll(void) const
{
    int i;
    std::cout << "+--------------------------------------+\n";
	std::cout << "|               PHONE BOOK             |\n";
	std::cout << "+--------------------------------------+\n";
	
	std::cout << "+--------------------------------------+\n";
	std::cout << "| Index | FirstName | LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";

    for (i = 0; i < this->_contact_count; i++)
        std::cout << i << std::endl;
}