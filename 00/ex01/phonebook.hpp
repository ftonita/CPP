#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{
private:
	Contact _book[8];
	int		_contact_count;
	void	_getAll(void) const;
	void	_viewMiniTable(int max) const;
	void	_readConsoleNumContact() const;
	void	_viewFullInfo(Contact contact) const;


public:
	PhoneBook();
	~PhoneBook();
	void	getMan(void) const;
	void	addContact(void);
	void	searchContact(void) const;
};




#endif