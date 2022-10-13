#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include <iomanip>
# include "contact.hpp"
# define EMPTY "-----"

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
	std::string data[11];

public:
	Contact();
	~Contact();

	void	setFirstName(std::string word);
	void	setLastName(std::string word);
	void	setNickName(std::string word);
	void	setLogin(std::string word);
	void	setPostalAddress(std::string word);
	void	setEmailAddress(std::string word);
	void	setPhoneNumber(std::string word);		
	void	setBirthdayDate(std::string word);
	void	setFavoriteMeal(std::string word);
	void	setUnderwearColor(std::string word);
	void	setDarkSercret(std::string word);
	void	setDataConsole();

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getLogin() const;
	std::string	getPostalAddress() const;
	std::string	getEmailAddress() const;
	std::string	getPhoneNumber() const;		
	std::string	getBirthdayDate() const;
	std::string	getFavoriteMeal() const;
	std::string	getUnderwearColor() const;
	std::string	getDarkSercret() const;
	int			getMaxSizeInfo() const;
	
	bool		isEmptyContact() const;
};

#endif