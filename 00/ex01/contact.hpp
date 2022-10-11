#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include "contact.hpp"
# define EMPTY = "-----"

enum	contactData
{
	firstName,
	lastName,
	nickName,
	login,
	postalAddress,
	emailAddress,
	phoneNumber,
	birthdayDate,
	favoriteMeal,
	underwearColor,
	darkestSecret
};


class Contact
{
private:

public:
	Contact(/* args */);
	~Contact();
};

#endif