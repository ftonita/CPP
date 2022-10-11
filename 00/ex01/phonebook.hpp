#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include "contact.hpp"

class PhoneBook
{
private:
	Contact _book[8];
	int		_contact_count;
	void	_getAll(void) const;


public:
	PhoneBook(/* args */);
	~PhoneBook();
	void	getMan(void) const;
	void	addContact(Contact contact);
	void	searchContact(int id) const;
};




#endif