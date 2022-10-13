#include "phonebook.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::string cmd;

    PhoneBook.getMan();
    while (true)
    {
        std::cout << "Enter command: " << std::ends;
        std::getline(std::cin, cmd);
        if (!cmd[0])
        {
            std::cout << "You haven't written anything... Exit..." << std::endl;
            return (1);
        }
        if (cmd == "EXIT")
        {
            std::cout << "Exit..." << std::endl;
            return (0);
        }
        else if (cmd == "ADD")
        {
            PhoneBook.addContact();

        }
        else if (cmd == "SEARCH")
        {
            PhoneBook.searchContact();

        }
        else
            std::cout << "Command not found... Try again!" << std::endl;

    }
    return (0);
}