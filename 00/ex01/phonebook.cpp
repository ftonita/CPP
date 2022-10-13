#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->_contact_count = 0;
}

PhoneBook::~PhoneBook()
{

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
{
        std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		if (this->_book[i].getFirstName().length() > 10)
		{
			std::cout << this->_book[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->_book[i].getFirstName() << "|"; 
		}
		if (this->_book[i].getLastName().length() > 10)
		{
			std::cout << this->_book[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->_book[i].getLastName() << "|"; 
		}
		if (this->_book[i].getNickName().length() > 10)
		{
			std::cout << this->_book[i].getNickName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->_book[i].getNickName() << "|"; 
		}
		std::cout << "\n";
	}
	std::cout << "+--------------------------------------+\n";
}

void	PhoneBook::_viewMiniTable(int max) const
{
	std::cout << "+";
	for (int i = 0; i <= max; i++)
		std::cout << "-";
	std::cout << "+\n";
}

void	PhoneBook::_viewFullInfo(Contact contact) const
{
	int max = contact.getMaxSizeInfo();
	int maxInfo =  contact.getMaxSizeInfo();

	max += 17;
	_viewMiniTable(max);
	std::cout << "|" << "FirstName:       |" << std::setw(maxInfo) << contact.getFirstName() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "LastName:        |" << std::setw(maxInfo) << contact.getLastName() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "NickName:        |" << std::setw(maxInfo) << contact.getNickName() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Login:           |" << std::setw(maxInfo) << contact.getLogin() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Postal Adress:   |" << std::setw(maxInfo) << contact.getPostalAddress() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Email Adress:    |" << std::setw(maxInfo) << contact.getEmailAddress() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Phone Number:    |" << std::setw(maxInfo) << contact.getPhoneNumber() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Birthday Day:    |" << std::setw(maxInfo) << contact.getBirthdayDate() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Favorite Meal:   |" << std::setw(maxInfo) << contact.getFavoriteMeal() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Underwear Color: |" << std::setw(maxInfo) << contact.getUnderwearColor() << "|\n";
	_viewMiniTable(max);
	std::cout << "|" << "Darkest Secret:  |" << std::setw(maxInfo) << contact.getDarkSercret() << "|\n";
	_viewMiniTable(max);
}

void	PhoneBook::_readConsoleNumContact(void) const
{
	std::string s_id;
	int	index;

	std::cout << "Enter num contact:\n" << std::endl;;
	getline(std::cin, s_id);
	index = atoi(s_id.c_str());
	if (index <= 0 || index > this->_contact_count)
	{
		std::cout << "Contact not found :(\n";
		return ;
	}
	_viewFullInfo(_book[index - 1]);
}

void	PhoneBook::addContact()
{
    int i;

    if (this->_contact_count == 8)
    {
        for (i = 0; i < this->_contact_count - 1; i++)
			this->_book[i] = this->_book[i + 1];
		this->_contact_count--;
        std::cout << "PhoneBook is full, one old contact will be rewritten\n";
    }

    std::cout << "Add new contact" << std::endl;
    this->_book[_contact_count].setDataConsole();
	if (this->_book[_contact_count].isEmptyContact())
	{
   		std::cout << "Sorry, you write empty contact :(" << std::endl;
		this->_book[_contact_count] = Contact();
		return ;
	}
    this->_contact_count++;
    std::cout << "Count contact: " << this->_contact_count << std::endl;
}

void	PhoneBook::searchContact(void) const
{
	if (this->_contact_count == 0)
	{
		std::cout << "Sorry, PhoneBook is empty\n";
		return ;
	}
	_getAll();
	_readConsoleNumContact();
}